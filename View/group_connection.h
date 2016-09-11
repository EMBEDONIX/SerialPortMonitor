#ifndef CONNECTION_H
#define CONNECTION_H

#include <QWidget>
#include <Manager/manager.h>

namespace Ui {
    class GroupConnection;
}

namespace Ex {

    /**
     * @brief The GroupConnection class. This class contains the widgets for
     * defining to which port with what settings we want to connect.
     */
    class GroupConnection : public QWidget
    {
        Q_OBJECT

    public:
        explicit GroupConnection(QWidget *parent = nullptr);
        ~GroupConnection();
        /**
         * @brief Updates the combobox of ports with available ports
         * on the platform.
         * @param ports List of available ports on the platform.
         */
        void refreshPortsList(const QStringList *ports);

    public slots:

    private:
        Ui::GroupConnection *ui;
    };
}

#endif // CONNECTION_H
