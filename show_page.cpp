#include "show_page.h"
#include "ui_show_page.h"

show_page::show_page(QWidget *parent,QByteArray data) ://展示界面的初始化构造函数,该函数接受一个外来参数,为来自登录界面服务器通信时获得的该用户的所有信息
    QDialog(nullptr),
    ui(new Ui::show_page)
{
    ui->setupUi(this);
    QString uid,username, password, name, gender, birthday;//用户信息的载体
    QByteArray pix_bytearray;
    QString data_decode=QString::fromUtf8(data);//将从服务器获取的信息使用utf8格式进行解码
    QStringList data_list=data_decode.split("^&^");//通过下面的操作分隔服务器传来的二进制信息,通过utf8编码转换,获取用户的所有信息
    uid=data_list[1];
    username=data_list[2];
    password=data_list[3];
    name=data_list[4];
    gender=data_list[5];
    birthday=data_list[6];
    int presize = 0;
    for (int i = 0; i < 7; ++i)
    {
        presize += data_list[i].toUtf8().size();
        presize += 3;
    }
    for (int i = presize; i < data.size(); ++i)pix_bytearray.append(data[i]);
    this->ui->le_username->setText(username);//对用户信息进行展示
    this->ui->le_name->setText(name);
    this->ui->lb_name->setText("欢迎，"+username);
    this->ui->le_UID->setText(uid);
    this->ui->cb_gender->setCurrentIndex(gender=="男"?0:1);
    this->ui->de_birthday->setDate(QDate::fromString(birthday,"yyyy.MM.dd"));
    QPixmap pixmap;
    pixmap.loadFromData(pix_bytearray,"png");//使用pixmap的loadfromdata将图片以固定的格式从来自服务器的二进制信息中还原出来并展示
    this->ui->lb_icon->setPixmap(pixmap);
}

show_page::~show_page()
{
    delete ui;
}
