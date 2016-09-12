#ifndef SERIALBROKER_H
#define SERIALBROKER_H

#include <QObject>

class SerialBroker : public QObject
{
public:
    SerialBroker();
    ~SerialBroker();
    QStringList* getAvailablePorts();

private:
    QStringList m_ports;

signals:

public slots:


};

#endif // SERIALBROKER_H
