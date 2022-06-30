#include "login_page.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);//qt核心
    login_page w;//主界面qmainwindow,即登录界面
    w.show();
    return a.exec();
}
