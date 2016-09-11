#ifndef UTILS_H
#define UTILS_H

#include <QString>
#include <QDebug>

namespace Ex {


    class Utils
    {
    public:
        Utils();
        static void destructorMsg(const QString& name);
        static void destructorMsg(const QObject* const obj);
    };
}
#endif // UTILS_H
