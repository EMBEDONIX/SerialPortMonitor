#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <View/group_connection.h>

namespace Ui {
    class MainWindow;
}

namespace Ex {
    class Ex::GroupConnection;
    class MainWindow : public QMainWindow
    {
        Q_OBJECT

    public:
        explicit MainWindow(QWidget *parent, Ex::GroupConnection& gc);
        ~MainWindow();

    private:
        Ui::MainWindow *ui;
        GroupConnection& m_groupConnection;
        void RequestConnection();
    };
}

#endif // MAINWINDOW_H
