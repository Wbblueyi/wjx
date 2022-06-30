/********************************************************************************
** Form generated from reading UI file 'login_page.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_PAGE_H
#define UI_LOGIN_PAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_login_page
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_3;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *le_username;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_5;
    QLineEdit *le_password;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *verticalSpacer_5;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_8;
    QPushButton *pb_login;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *pb_register;
    QSpacerItem *horizontalSpacer_9;
    QSpacerItem *verticalSpacer;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *login_page)
    {
        if (login_page->objectName().isEmpty())
            login_page->setObjectName(QString::fromUtf8("login_page"));
        login_page->resize(549, 421);
        centralwidget = new QWidget(login_page);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QFont font;
        font.setPointSize(24);
        font.setBold(false);
        label_3->setFont(font);
        label_3->setTextFormat(Qt::PlainText);
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_3);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font1;
        font1.setPointSize(14);
        label->setFont(font1);

        horizontalLayout->addWidget(label);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        le_username = new QLineEdit(centralwidget);
        le_username->setObjectName(QString::fromUtf8("le_username"));
        le_username->setFont(font1);

        horizontalLayout->addWidget(le_username);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        horizontalLayout->setStretch(0, 2);
        horizontalLayout->setStretch(1, 2);
        horizontalLayout->setStretch(2, 2);
        horizontalLayout->setStretch(3, 5);
        horizontalLayout->setStretch(4, 2);

        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font1);

        horizontalLayout_2->addWidget(label_2);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);

        le_password = new QLineEdit(centralwidget);
        le_password->setObjectName(QString::fromUtf8("le_password"));
        le_password->setFont(font1);
        le_password->setEchoMode(QLineEdit::PasswordEchoOnEdit);

        horizontalLayout_2->addWidget(le_password);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_6);

        horizontalLayout_2->setStretch(0, 2);
        horizontalLayout_2->setStretch(1, 2);
        horizontalLayout_2->setStretch(2, 2);
        horizontalLayout_2->setStretch(3, 5);
        horizontalLayout_2->setStretch(4, 2);

        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_5);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_8);

        pb_login = new QPushButton(centralwidget);
        pb_login->setObjectName(QString::fromUtf8("pb_login"));
        pb_login->setFont(font1);

        horizontalLayout_3->addWidget(pb_login);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_7);

        pb_register = new QPushButton(centralwidget);
        pb_register->setObjectName(QString::fromUtf8("pb_register"));
        pb_register->setFont(font1);

        horizontalLayout_3->addWidget(pb_register);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_9);

        horizontalLayout_3->setStretch(0, 1);
        horizontalLayout_3->setStretch(1, 3);
        horizontalLayout_3->setStretch(2, 2);
        horizontalLayout_3->setStretch(3, 3);
        horizontalLayout_3->setStretch(4, 1);

        verticalLayout->addLayout(horizontalLayout_3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        verticalLayout->setStretch(3, 2);
        verticalLayout->setStretch(4, 1);
        verticalLayout->setStretch(5, 2);
        verticalLayout->setStretch(6, 1);
        verticalLayout->setStretch(7, 2);
        verticalLayout->setStretch(8, 1);

        verticalLayout_2->addLayout(verticalLayout);

        login_page->setCentralWidget(centralwidget);
        menubar = new QMenuBar(login_page);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 549, 26));
        login_page->setMenuBar(menubar);
        statusbar = new QStatusBar(login_page);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        login_page->setStatusBar(statusbar);

        retranslateUi(login_page);

        QMetaObject::connectSlotsByName(login_page);
    } // setupUi

    void retranslateUi(QMainWindow *login_page)
    {
        login_page->setWindowTitle(QCoreApplication::translate("login_page", "\347\231\273\345\275\225", nullptr));
        label_3->setText(QCoreApplication::translate("login_page", "\346\254\242\350\277\216\344\275\277\347\224\250XX\347\263\273\347\273\237", nullptr));
        label->setText(QCoreApplication::translate("login_page", "\347\224\250\346\210\267\345\220\215\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("login_page", "\345\257\206\347\240\201\357\274\232", nullptr));
        pb_login->setText(QCoreApplication::translate("login_page", "\347\231\273\345\275\225", nullptr));
        pb_register->setText(QCoreApplication::translate("login_page", "\346\263\250\345\206\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class login_page: public Ui_login_page {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_PAGE_H
