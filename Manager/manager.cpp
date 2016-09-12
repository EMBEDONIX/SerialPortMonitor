#include "manager.h"
#include "utils.h"
#include "View/mainwindow.h"
#include "View/group_connection.h"

#include <QSerialPort>

namespace Ex {


   Manager::Manager() :
        QObject(nullptr),
        m_mainWindow(*new MainWindow(nullptr, *new GroupConnection(nullptr)))
    {
    }

    Manager::~Manager()
    {
        Ex::Utils::destructorMsg(this);
        delete &m_mainWindow;
    }

    void Manager::start() const
    {
        m_mainWindow.show();
    }

}
