#ifndef REGISTER_PAGE_H
#define REGISTER_PAGE_H

#include <QDialog>
#include<QPushButton>
#include<QTcpSocket>
#include<QAbstractSocket>
#include<QMessageBox>
#include<QCloseEvent>
#include<QFileDialog>
#include<QPixmap>
#include"resource.h"
#include<QBuffer>
#include"show_page.h"

namespace Ui {
class register_page;
}

class register_page : public QDialog
{
    Q_OBJECT

public:
    explicit register_page(QWidget *parent = nullptr);
    ~register_page();
    QTcpSocket* mysocket;
    void pb_register_clicked();
    void pb_chooseIcon_clicked();
    void read_socket();
    void closeEvent(QCloseEvent * e)override;

private:
    Ui::register_page *ui;
};

#endif // REGISTER_PAGE_H
