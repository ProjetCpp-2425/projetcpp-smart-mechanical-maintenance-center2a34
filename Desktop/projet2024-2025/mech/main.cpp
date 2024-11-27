#include "mainwindow.h"

#include <QApplication>
#include <QDebug>
#include <QLoggingCategory>


int main(int argc, char *argv[])
{
    qDebug() << "Application started";

    //QLoggingCategory::setFilterRules("qt.qml.connections=true\nqt.location.mapbox=true");
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
