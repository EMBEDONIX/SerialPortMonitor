#include "serialbroker.h"

namespace Ex {
    QStringList* SerialBroker::getAvailablePorts()
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
}
