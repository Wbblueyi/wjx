/********************************************************************************
** Form generated from reading UI file 'register_page.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTER_PAGE_H
#define UI_REGISTER_PAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_register_page
{
public:
    QHBoxLayout *horizontalLayout_8;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QLabel *label_2;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer;
    QLineEdit *le_username;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_7;
    QLineEdit *le_password;
    QSpacerItem *horizontalSpacer_8;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_6;
    QLineEdit *le_name;
    QSpacerItem *horizontalSpacer_9;
    QSpacerItem *verticalSpacer_5;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_10;
    QLabel *label_6;
    QSpacerItem *horizontalSpacer_11;
    QComboBox *cb_gender;
    QSpacerItem *horizontalSpacer_12;
    QSpacerItem *verticalSpacer_6;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_13;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer_14;
    QDateEdit *de_birthday;
    QSpacerItem *horizontalSpacer_15;
    QSpacerItem *verticalSpacer_7;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_16;
    QLabel *label_8;
    QSpacerItem *horizontalSpacer_17;
    QLabel *lb_icon;
    QPushButton *pb_chooseIcon;
    QSpacerItem *horizontalSpacer_19;
    QSpacerItem *verticalSpacer_8;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_20;
    QPushButton *pb_register;
    QSpacerItem *horizontalSpacer_21;
    QSpacerItem *verticalSpacer_9;

    void setupUi(QDialog *register_page)
    {
        if (register_page->objectName().isEmpty())
            register_page->setObjectName(QString::fromUtf8("register_page"));
        register_page->resize(669, 649);
        horizontalLayout_8 = new QHBoxLayout(register_page);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        label_2 = new QLabel(register_page);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font;
        font.setPointSize(14);
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        label_3 = new QLabel(register_page);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QFont font1;
        font1.setPointSize(12);
        label_3->setFont(font1);

        horizontalLayout->addWidget(label_3);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        le_username = new QLineEdit(register_page);
        le_username->setObjectName(QString::fromUtf8("le_username"));
        le_username->setFont(font1);

        horizontalLayout->addWidget(le_username);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 2);
        horizontalLayout->setStretch(2, 1);
        horizontalLayout->setStretch(3, 5);
        horizontalLayout->setStretch(4, 1);

        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        label_4 = new QLabel(register_page);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font1);

        horizontalLayout_2->addWidget(label_4);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_7);

        le_password = new QLineEdit(register_page);
        le_password->setObjectName(QString::fromUtf8("le_password"));
        le_password->setFont(font1);

        horizontalLayout_2->addWidget(le_password);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_8);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 2);
        horizontalLayout_2->setStretch(2, 1);
        horizontalLayout_2->setStretch(3, 5);
        horizontalLayout_2->setStretch(4, 1);

        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        label_5 = new QLabel(register_page);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font1);

        horizontalLayout_3->addWidget(label_5);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);

        le_name = new QLineEdit(register_page);
        le_name->setObjectName(QString::fromUtf8("le_name"));
        le_name->setFont(font1);

        horizontalLayout_3->addWidget(le_name);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_9);

        horizontalLayout_3->setStretch(0, 1);
        horizontalLayout_3->setStretch(1, 2);
        horizontalLayout_3->setStretch(2, 1);
        horizontalLayout_3->setStretch(3, 5);
        horizontalLayout_3->setStretch(4, 1);

        verticalLayout->addLayout(horizontalLayout_3);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_10);

        label_6 = new QLabel(register_page);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font1);

        horizontalLayout_4->addWidget(label_6);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_11);

        cb_gender = new QComboBox(register_page);
        cb_gender->addItem(QString());
        cb_gender->addItem(QString());
        cb_gender->setObjectName(QString::fromUtf8("cb_gender"));
        cb_gender->setFont(font1);

        horizontalLayout_4->addWidget(cb_gender);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_12);

        horizontalLayout_4->setStretch(0, 1);
        horizontalLayout_4->setStretch(1, 2);
        horizontalLayout_4->setStretch(2, 1);
        horizontalLayout_4->setStretch(3, 5);
        horizontalLayout_4->setStretch(4, 1);

        verticalLayout->addLayout(horizontalLayout_4);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_6);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_13);

        label_7 = new QLabel(register_page);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font1);

        horizontalLayout_5->addWidget(label_7);

        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_14);

        de_birthday = new QDateEdit(register_page);
        de_birthday->setObjectName(QString::fromUtf8("de_birthday"));
        de_birthday->setFont(font1);
        de_birthday->setCalendarPopup(true);

        horizontalLayout_5->addWidget(de_birthday);

        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_15);

        horizontalLayout_5->setStretch(0, 1);
        horizontalLayout_5->setStretch(1, 2);
        horizontalLayout_5->setStretch(2, 1);
        horizontalLayout_5->setStretch(3, 5);
        horizontalLayout_5->setStretch(4, 1);

        verticalLayout->addLayout(horizontalLayout_5);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_7);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalSpacer_16 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_16);

        label_8 = new QLabel(register_page);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font1);

        horizontalLayout_6->addWidget(label_8);

        horizontalSpacer_17 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_17);

        lb_icon = new QLabel(register_page);
        lb_icon->setObjectName(QString::fromUtf8("lb_icon"));
        lb_icon->setFont(font1);
        lb_icon->setPixmap(QPixmap(QString::fromUtf8("C:/Users/MarovloYukiatsu/Pictures/1.png")));
        lb_icon->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(lb_icon);

        pb_chooseIcon = new QPushButton(register_page);
        pb_chooseIcon->setObjectName(QString::fromUtf8("pb_chooseIcon"));
        pb_chooseIcon->setFont(font1);

        horizontalLayout_6->addWidget(pb_chooseIcon);

        horizontalSpacer_19 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_19);

        horizontalLayout_6->setStretch(0, 1);
        horizontalLayout_6->setStretch(1, 2);
        horizontalLayout_6->setStretch(2, 1);
        horizontalLayout_6->setStretch(3, 3);
        horizontalLayout_6->setStretch(4, 2);
        horizontalLayout_6->setStretch(5, 1);

        verticalLayout->addLayout(horizontalLayout_6);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_8);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalSpacer_20 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_20);

        pb_register = new QPushButton(register_page);
        pb_register->setObjectName(QString::fromUtf8("pb_register"));
        pb_register->setFont(font);

        horizontalLayout_7->addWidget(pb_register);

        horizontalSpacer_21 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_21);

        horizontalLayout_7->setStretch(0, 1);
        horizontalLayout_7->setStretch(1, 2);
        horizontalLayout_7->setStretch(2, 1);

        verticalLayout->addLayout(horizontalLayout_7);

        verticalSpacer_9 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_9);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 2);
        verticalLayout->setStretch(2, 1);
        verticalLayout->setStretch(3, 2);
        verticalLayout->setStretch(4, 1);
        verticalLayout->setStretch(5, 2);
        verticalLayout->setStretch(6, 1);
        verticalLayout->setStretch(7, 2);
        verticalLayout->setStretch(8, 1);
        verticalLayout->setStretch(9, 2);
        verticalLayout->setStretch(10, 1);
        verticalLayout->setStretch(11, 2);
        verticalLayout->setStretch(12, 1);
        verticalLayout->setStretch(13, 4);
        verticalLayout->setStretch(14, 1);
        verticalLayout->setStretch(15, 2);
        verticalLayout->setStretch(16, 1);

        horizontalLayout_8->addLayout(verticalLayout);


        retranslateUi(register_page);

        QMetaObject::connectSlotsByName(register_page);
    } // setupUi

    void retranslateUi(QDialog *register_page)
    {
        register_page->setWindowTitle(QCoreApplication::translate("register_page", "\346\263\250\345\206\214\347\225\214\351\235\242", nullptr));
        label_2->setText(QCoreApplication::translate("register_page", "\350\257\267\350\276\223\345\205\245\344\270\213\345\210\227\344\277\241\346\201\257", nullptr));
        label_3->setText(QCoreApplication::translate("register_page", "\347\224\250\346\210\267\345\220\215\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("register_page", "\345\257\206\347\240\201\357\274\232", nullptr));
        label_5->setText(QCoreApplication::translate("register_page", "\345\247\223\345\220\215\357\274\232", nullptr));
        label_6->setText(QCoreApplication::translate("register_page", "\346\200\247\345\210\253\357\274\232", nullptr));
        cb_gender->setItemText(0, QCoreApplication::translate("register_page", "\347\224\267", nullptr));
        cb_gender->setItemText(1, QCoreApplication::translate("register_page", "\345\245\263", nullptr));

        label_7->setText(QCoreApplication::translate("register_page", "\347\224\237\346\227\245\357\274\232", nullptr));
        label_8->setText(QCoreApplication::translate("register_page", "\345\244\264\345\203\217\357\274\232", nullptr));
        lb_icon->setText(QString());
        pb_chooseIcon->setText(QCoreApplication::translate("register_page", "\351\200\211\346\213\251\346\226\207\344\273\266", nullptr));
        pb_register->setText(QCoreApplication::translate("register_page", "\346\263\250\345\206\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class register_page: public Ui_register_page {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTER_PAGE_H
