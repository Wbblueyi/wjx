#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget* parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    myserver = new QTcpServer();
    connect(this->myserver, &QTcpServer::newConnection, this, &MainWindow::new_connect);//槽函数与信号进行绑定
    myserver->listen(QHostAddress(host), port);//服务器开始监听

    db = QSqlDatabase::addDatabase("QSQLITE");//最后决定采用sqlite进行连接
    db.setDatabaseName("orwjc.db");
    //    db.setHostName("127.0.0.1");//这是mysql的连接代码
    //    db.setPort(3306);
    //    db.setDatabaseName("mysql"); //不是Database,记得别填错
    //    db.setUserName("root");
    //    db.setPassword("000815");
    if (db.open())//检查数据库能否打开
    {
        qDebug() << "link success";
    }
    else
    {
        qDebug() << "error open database because" << db.lastError().text();
    }
    QSqlQuery query;
    query.exec(QString("select count(*) from sqlite_master where type='table' and name='%1'").arg("user_info"));
    if (query.next())//检查数据表是否存在,以进行创建或者跳过创建步骤
    {
        if (query.value(0).toInt() == 0)//创建数据表
        {
            QString sql = R"(CREATE TABLE "user_info"
                        (
                            UID      integer not null
                            constraint table_name_pk
                            primary key autoincrement,
                            username text    not null,
                            password text    not null,
                            name     text    not null,
                            gender   text    not null,
                            birthday text    not null,
                            icon     blob    not null
                        );)";
            query.exec(sql);
        }
        else
        {
            qDebug() << "table exist";
        }
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::new_connect()//槽函数:每当有新的连接到来,执行该函数
{
    QTcpSocket* socket = myserver->nextPendingConnection();//获取新连接对应额socket
    socket->setSocketOption(QAbstractSocket::KeepAliveOption, 1);
    socket->setSocketOption(QAbstractSocket::LowDelayOption, 1);//设置socket的保活和低延迟
    while (socket->state() == QAbstractSocket::ConnectedState)//当该socket处于非连接状态时,跳出循环
    {
        socket->waitForReadyRead(10000);

        QByteArray data = socket->readAll();
        QString data_decode = QString::fromUtf8(data);//将客户端传输的信息使用utf8进行解码,方便进行命令判断

        QStringList data_list = data_decode.split("^&^");//使用split对分隔符^&^进行分隔
        QString res;
        if (data_list[0] == "login")//查询数据库
        {
            QSqlQuery query;
            query.exec("select * from user_info where username='" + data_list[1] + "'");
            qDebug() << query.lastError() << " " << query.lastError().nativeErrorCode();//查询用于对应信息
            QString uid, username, password, name, gender, birthday;
            QByteArray pix_bytearray;
            while (query.next())//从数据库获取用户信息
            {
                uid = query.value(0).toString();
                username = query.value(1).toString();
                password = query.value(2).toString();
                name = query.value(3).toString();
                gender = query.value(4).toString();
                birthday = query.value(5).toString();
                pix_bytearray = query.value(6).toByteArray();
            }

            if (password == data_list[2] && !uid.isEmpty())//判断登录密码是否正确
            {
                res = "login_success^&^" +
                    uid +
                    "^&^" +
                    username +
                    "^&^" +
                    password +
                    "^&^" +
                    name +
                    "^&^" +
                    gender +
                    "^&^" +
                    birthday +
                    "^&^";
                socket->write(res.toUtf8() + pix_bytearray);//密码正确,组织用户信息对向客户端回信
                socket->flush();
            }
            else
            {
                res = "login_failed";//密码错误或用户不存在
                socket->write(res.toUtf8());
                socket->flush();
            }
        }
        else if (data_list[0] == "register")//查数据库
        {
            QSqlQuery query;
            query.exec("select * from user_info where username='" + data_list[1] + "'");//注册之前,首先检查用户是否已经注册
            if (!query.next())
            {
                int presize = 0;//获取用户图片在bytearray数据流中的开始的位置
                for (int i = 0; i < 6; ++i)
                {
                    presize += data_list[i].toUtf8().size();//这里不能直接用list的size，在qstring中，中文size=1，而utf8在二进制编码中中文是两个byte，size应该=2
                    presize += 3;
                }
                QByteArray pix_data;
                for (int i = presize; i < data.size(); ++i)
                {
                    pix_data.append(data[i]);
                }
                QVariant var_pix(pix_data);//将用户头像提取出来,使用qvariant放入数据库中,该字段采用blob格式
                //QString sql = "insert into user_info () values(?, ?, ?, ?, ?, ?)";
                query.prepare("insert into user_info (username, password, name, gender, birthday, icon)"
                              "values (?, ?, ?, ?, ?, ?)");
                query.addBindValue(data_list[1]);
                query.addBindValue(data_list[2]);
                query.addBindValue(data_list[3]);
                query.addBindValue(data_list[4]);
                query.addBindValue(data_list[5]);
                query.addBindValue(pix_data);
                query.exec();//执行注册的sql
                qDebug() << query.lastError() << " " << query.lastError().nativeErrorCode();
                res = "register_success";
                socket->write(res.toUtf8());//以UTF8编码向用户传递消息
                socket->flush();
            }
            else
            {
                res = "register_failed";//注册失败
                socket->write(res.toUtf8());
                socket->flush();
            }

        }
    }
}

