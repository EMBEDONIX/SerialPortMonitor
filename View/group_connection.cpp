#include "group_connection.h"
#include "ui_group_connection.h"
#include "utils.h"
#include <QMessageBox>

namespace Ex {

    GroupConnection::GroupConnection(QWidget *parent) :
        QWidget(parent),
        ui(new Ui::GroupConnection)
    {
        ui->setupUi(this);
    }

    GroupConnection::~GroupConnection()
    {
        Ex::Utils::destructorMsg(this);
        delete ui;
    }

    void GroupConnection::refreshPortsList(const QStringList* ports) {
        ui->cbPort->clear();
        if(!ports->isEmpty()) {
            foreach (QString port, *ports) {
                ui->cbPort->addItem(port);
            }
        } else {
            QMessageBox::critical(this, tr("SerialPort Monitor")
                                  , tr("There are no SerialPort(s) available on "
                                       "this system!\n %"));
        }
    }

}
