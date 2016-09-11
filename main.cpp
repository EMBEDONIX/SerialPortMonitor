#include "Manager/manager.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Ex::Manager m;
    m.start();


    return a.exec();
}
