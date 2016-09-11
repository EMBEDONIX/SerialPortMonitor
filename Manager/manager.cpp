#include "manager.h"
#include "utils.h"
#include "View/mainwindow.h"
#include "View/group_connection.h"

#include <QSerialPort>
#include <QSerialPortInfo>

Ex::Manager::Manager() :
    QObject(nullptr),
    m_mainWindow(*new MainWindow(nullptr, *new GroupConnection(nullptr)))
{
    m_port = new QSerialPort(this);
}

Ex::Manager::~Manager()
{
    Ex::Utils::destructorMsg(this);
    delete &m_mainWindow;
}

void Ex::Manager::start() const
{
    m_mainWindow.show();
}

QStringList* Ex::Manager::getAvailablePorts()
{
    delete m_ports;
    m_ports = new QStringList();
    auto info = QSerialPortInfo::availablePorts();
    foreach (QSerialPortInfo pi, info) {
        m_ports->append(pi.portName());
    }
    m_ports->sort();
    return m_ports;
}
