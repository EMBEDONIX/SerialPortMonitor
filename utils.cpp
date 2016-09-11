#include "utils.h"


namespace Ex {
    static QString DESTRUCTOR_MSG = QStringLiteral("%1 is being destructed.");

    void Utils::destructorMsg(const QString& name) {
        qDebug() << DESTRUCTOR_MSG.arg(name);
    }

    void Utils::destructorMsg(const QObject* const obj) {
        destructorMsg(obj->metaObject()->className());
    }
}
