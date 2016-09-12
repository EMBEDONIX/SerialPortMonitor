#ifndef MANAGER_H
#define MANAGER_H

#include <QObject>
#include <QString>
#include <QStringList>

#include <Model/serialbroker.h>

namespace Ex {

    class MainWindow;
    class SerialBroker;

    class Manager final: public QObject
    {
        Q_OBJECT

    public:
        explicit Manager();
        ~Manager();
        /**
         * @brief Starts the application's main form {@link MainWindow}.
         */
        void start() const;

    private:
        MainWindow& m_mainWindow;
        SerialBroker& m_serialBroker;
        QStringList* m_ports = nullptr;

        explicit Manager(const Manager& rhs) = delete;
        Manager& operator = (const Manager& rhs) = delete;

    signals:

    public slots:
    };
}

#endif // MANAGER_H
