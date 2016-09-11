#ifndef MANAGER_H
#define MANAGER_H

#include <QObject>
#include <QtSerialPort/QSerialPort>
#include <QString>
#include <QStringList>

namespace Ex {

    class MainWindow;

    class Manager final: public QObject
    {
        Q_OBJECT

    public:
        explicit Manager();
        ~Manager();
        void start() const;
        QSerialPort* m_port = nullptr;
        QStringList* getAvailablePorts();

    private:
        MainWindow& m_mainWindow;
        explicit Manager(const Manager& rhs) = delete;
        Manager& operator = (const Manager& rhs) = delete;
        QStringList* m_ports = nullptr;

    signals:

    public slots:
    };
}

#endif // MANAGER_H
