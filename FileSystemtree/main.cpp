#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.resize(600,400);
    w.setWindowTitle("File system tree ");
    w.show();
    return a.exec();
}
