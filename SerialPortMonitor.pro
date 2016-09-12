#-------------------------------------------------
#
# Project created by QtCreator 2016-09-11T13:24:40
#
#   Author: Saeid Yazdani
#           www.EmbedoniX.com
#
#-------------------------------------------------

QT       += core gui serialport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET      = SerialPortMonitor
TEMPLATE    = app


SOURCES +=  main.cpp\
            utils.cpp \
            Manager/manager.cpp \
            View/group_connection.cpp \
            View/mainwindow.cpp \
    Model/serialbroker.cpp

HEADERS  += utils.h \
            Manager/manager.h \
            View/mainwindow.h \
            View/group_connection.h \
    Model/serialbroker.h


FORMS    += View/mainwindow.ui \
            View/group_connection.ui

#only for GCC....if compiled by microsoft compilers it will warn :|
QMAKE_CXXFLAGS += -std=c++11
