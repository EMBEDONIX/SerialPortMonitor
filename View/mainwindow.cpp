#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "utils.h"
#include "View/group_connection.h"

namespace Ex {

    MainWindow::MainWindow(QWidget *parent, Ex::GroupConnection& gc):
        QMainWindow(parent),
        m_groupConnection(gc),
        ui(new Ui::MainWindow)
    {
        ui->setupUi(this);
        m_groupConnection.setParent(this);
        ui->lovPortSelection->addWidget(&m_groupConnection);
    }


    MainWindow::~MainWindow()
    {
        Ex::Utils::destructorMsg(this);
        delete ui;
    }


    void MainWindow::RequestConnection() {
        //m_mgr->m_port->open();
    }
}
