//#include "mainwindow.h"
#include <QApplication>
#include "testclass.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Foo *f = new Foo();
    //MainWindow w(f);
    //w.setWindowTitle("PID Tuner");
    //w.show();

    return a.exec();
}
