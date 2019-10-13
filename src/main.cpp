#include "mainwindow.h"
#include "floatbutton.h"
#include <QApplication>
#include <QDebug>
#include "event_monitor.h"



int main(int argc, char *argv[])
{
    QApplication a(argc, argv);



    FloatButton f;
    // f.show();
    f.move(800,500);


    MainWindow w;
    w.setGeometry(800,200,400,300);
    w.show();

    w.activateWindow();


    return a.exec();
}
