#-------------------------------------------------
#
# Project created by QtCreator 2016-09-11T13:24:40
#
#-------------------------------------------------

QT       += core gui serialport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = SerialPortMonitor
TEMPLATE = app


SOURCES += main.cpp\
        View/mainwindow.cpp \
    Manager/manager.cpp \
    View/group_connection.cpp \
    utils.cpp

HEADERS  += View/mainwindow.h \
    Manager/manager.h \
    View/group_connection.h \
    utils.h

FORMS    += View/mainwindow.ui \
    View/group_connection.ui

QMAKE_CXXFLAGS += -std=c++11
