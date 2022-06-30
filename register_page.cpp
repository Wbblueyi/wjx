#include "register_page.h"
#include "ui_register_page.h"

register_page::register_page(QWidget *parent) ://注册界面初始化构造函数
    QDialog(parent),
    ui(new Ui::register_page)
{
    ui->setupUi(this);
    mysocket=new QTcpSocket();
    mysocket->setSocketOption(QAbstractSocket::KeepAliveOption,1);
    mysocket->setSocketOption(QAbstractSocket::LowDelayOption,1);//socket保活以及低延时设置
    mysocket->connectToHost(host,port);
    connect(this->ui->pb_chooseIcon,&QPushButton::clicked,this,&register_page::pb_chooseIcon_clicked);
    connect(this->ui->pb_register,&QPushButton::clicked,this,&register_page::pb_register_clicked);
    connect(mysocket,&QTcpSocket::readyRead,this,&register_page::read_socket);//槽函数与信号绑定
}

register_page::~register_page()
{
    delete ui;
}

void register_page::read_socket()//槽函数:服务器与注册界面通信时读取socket内容
{
    QByteArray data=mysocket->readAll();
    QString data_decode=QString::fromUtf8(data);//将从服务器获取的信息使用utf8格式进行解码
    QStringList data_list=data_decode.split("^&^");
    if(data_list[0]=="register_success")//根据服务器返回的信息判断注册是否成功
    {
        QMessageBox::warning(this,"成功","注册成功","OK");
        this->close();
        return;
    }
    else
    {
        QMessageBox::warning(this,"错误","注册失败，用户名已被占用","OK");
        return;
    }

}

void register_page::pb_chooseIcon_clicked()//槽函数:当注册界面上的选择头像按钮被点击时调用
{
    QFileDialog fdl;//通过qfilediaglo选择文件,只支持png文件
    fdl.setNameFilter("*.png *.PNG");
    fdl.exec();
    if(!fdl.selectedFiles().isEmpty())
    {
        QPixmap pic(fdl.selectedFiles()[0]);
        this->ui->lb_icon->setPixmap(pic);
    }
}

void register_page::pb_register_clicked()//槽函数:当注册界面上的注册按钮被点击时调用
{
    if(mysocket->state()!=QAbstractSocket::ConnectedState)//对服务器进行积极连接
    {
        mysocket->connectToHost(host,port);
        mysocket->waitForConnected(2000);
    }
    if(
            this->ui->le_name->text().isEmpty()||//判断用户输入的注册信息是否完整
            this->ui->le_password->text().isEmpty()||
            this->ui->le_username->text().isEmpty())
    {
        QMessageBox::warning(this,"错误","请填写完整的信息","OK");
        return;
    }
    QString data="register^&^"+//根据注册界面上的所有内容,构建注册信息bytearray,自己设计的用^&^当做信息中符号的分隔符,方便使用split函数进行处理
            this->ui->le_username->text()+
            "^&^"+
            this->ui->le_password->text()+
            "^&^"+
            this->ui->le_name->text()+
            "^&^";
    data+=this->ui->cb_gender->currentIndex()==0?"男":"女";
    data+="^&^";
    data+=this->ui->de_birthday->date().toString("yyyy.MM.dd");
    data+="^&^";
    QByteArray data_to_send=data.toUtf8();//将所有信息使用utf8编码为二进制byte信息,方便进行socket通信和支持中文.

    QByteArray pix_bytearray;
    QBuffer buffer(&pix_bytearray);
    buffer.open(QIODevice::WriteOnly);
    this->ui->lb_icon->pixmap()->save(&buffer,"png");//吧pixmap图片文件保存save到这个buffer上，而这个buffer连接到pixbytearray这个qbytearray上，即吧图片
    //存到了qbytearray上面
    data_to_send.append(pix_bytearray);//将变成byte信息的图片加在注册信息的最后面
    //this->ui->le_name->setText(QString::number(pix_bytearray.size()));
    mysocket->write(data_to_send);//向服务器发送注册信息
    mysocket->flush();
}

void register_page::closeEvent(QCloseEvent* e)//重写界面关闭closeevent,保证界面关闭时首先关闭socket
{
    this->mysocket->disconnectFromHost();
    this->close();
}
