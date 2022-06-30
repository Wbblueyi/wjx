#include "login_page.h"
#include "ui_login_page.h"

login_page::login_page(QWidget *parent)//登录界面初始化
    : QMainWindow(parent)
    , ui(new Ui::login_page)
{
    ui->setupUi(this);
    mysocket=new QTcpSocket();
    mysocket->setSocketOption(QAbstractSocket::KeepAliveOption,1);
    mysocket->setSocketOption(QAbstractSocket::LowDelayOption,1);//socket保活和低延迟设置
    mysocket->connectToHost(host,port);
    connect(this->ui->pb_login,&QPushButton::clicked,this,&login_page::pb_login_clicked);
    connect(this->ui->pb_register,&QPushButton::clicked,this,&login_page::pb_register_clicked);
    connect(this->mysocket,&QTcpSocket::readyRead,this,&login_page::read_socket);//信号与槽的连接

}

login_page::~login_page()
{
    delete ui;
}

void login_page::read_socket()//槽函数:当与服务器相连的socket有数据可读时由readyRead信号激活执行,读取服务器传来的数据
{
    QByteArray data=mysocket->readAll();
    QString data_decode=QString::fromUtf8(data);
    QStringList data_list=data_decode.split("^&^");
    if(data_list[0]=="login_success")
    {
        QMessageBox::information(this,"成功","登录成功","OK");
        show_page sp(nullptr,data);
        this->close();
        sp.exec();
    }
    else QMessageBox::warning(this,"失败","登录失败，请检查密码或用户名","OK");
}

void login_page::pb_login_clicked()//槽函数:当界面上登录按钮被点击时,根据界面所填信息与服务器进行通信
{
    if(this->ui->le_username->text().isEmpty()||this->ui->le_password->text().isEmpty())//判断用户是否完整输入信息
    {
        QMessageBox::warning(this,"错误","请填写完整的用户名和密码","OK");
        return;
    }
    if(mysocket->state()!=QAbstractSocket::ConnectedState)//如果没有连接上在这里重复连接直到连上,对服务器进行积极连接
    {
        mysocket->connectToHost(host,port);
        mysocket->waitForConnected(2000);
    }
    QByteArray data_to_write=("login^&^"+this->ui->le_username->text()+"^&^"+this->ui->le_password->text()).toUtf8();//构建登录信息,采用^&^分隔
    //将所有信息使用utf8编码为二进制byte信息,方便进行socket通信和支持中文.
    this->mysocket->write(data_to_write);//发送
    mysocket->flush();//立即发送

}

void login_page::pb_register_clicked()//槽函数:当界面上的注册按钮被点击时,断开当前界面的socket连接,并初始化注册界面
{
    register_page rp;
    mysocket->disconnectFromHost();
    while(mysocket->waitForDisconnected(3000));
    this->hide();//根据注册流程,在打开注册界面时并不关闭登录界面,而是隐藏,在注册完成后重新显示并重新连接
    rp.exec();
    mysocket->connectToHost(host,port);
    this->show();
}

void login_page::closeEvent(QCloseEvent* event)//重写登录界面的closeevent,以保证每次界面关闭之前先关闭socket连接
{
    mysocket->close();
    this->close();
}

