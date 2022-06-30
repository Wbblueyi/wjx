#ifndef SHOW_PAGE_H
#define SHOW_PAGE_H

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
#include<QDate>

namespace Ui {
class show_page;
}

class show_page : public QDialog
{
    Q_OBJECT

public:
    explicit show_page(QWidget *parent,QByteArray data);
    ~show_page();


private:
    Ui::show_page *ui;
};

#endif // SHOW_PAGE_H
