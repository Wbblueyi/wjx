#ifndef LOGIN_PAGE_H
#define LOGIN_PAGE_H

#include <QMainWindow>
#include<QPushButton>
#include<QTcpSocket>
#include<QAbstractSocket>
#include<QMessageBox>
#include"resource.h"
#include"register_page.h"
#include<show_page.h>
#include<QCloseEvent>
#include"show_page.h"

QT_BEGIN_NAMESPACE
namespace Ui { class login_page; }
QT_END_NAMESPACE

class login_page : public QMainWindow
{
    Q_OBJECT

public:
    login_page(QWidget *parent = nullptr);
    ~login_page();
    void pb_login_clicked();
    void pb_register_clicked();
    void read_socket();
    void closeEvent(QCloseEvent* event) override;
    QTcpSocket* mysocket;

private:
    Ui::login_page *ui;
};
#endif // LOGIN_PAGE_H
