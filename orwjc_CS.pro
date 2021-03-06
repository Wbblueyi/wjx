QT       += core gui
QT +=    network
QT +=    sql
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    login_page.cpp \
    register_page.cpp \
    resource.cpp \
    show_page.cpp

HEADERS += \
    login_page.h \
    register_page.h \
    resource.h \
    show_page.h

FORMS += \
    login_page.ui \
    register_page.ui \
    show_page.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
