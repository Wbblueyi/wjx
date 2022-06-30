#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QTcpServer>
#include<QTcpSocket>
#include<QAbstractSocket>
#include<QSqlDatabase>
#include<QSqlError>
#include<QSqlQuery>
#include<QVariant>
#include<QBuffer>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QTcpServer* myserver;//使用qtcpserver方便进行多socket通信管理,理论上支持多个客户端同时连接服务器
    QSqlDatabase db;
    QString host="0.0.0.0";//服务器监听的端口和ip
    int port=6677;
    void new_connect();
    void read_socket();
private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
