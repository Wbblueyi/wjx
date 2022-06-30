#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    //w.show();//注释掉服务器的界面展示代码,减少内存消耗,提高性能
    return a.exec();
}
