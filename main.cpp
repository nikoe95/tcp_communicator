/*
 * 1. Klasy bazujące na basic_message
 * 2. Klient/Serwer TCP/IP bazujący na bibliotekach QT
 * 3. Interfejs graficzny z wykorzystaniem QT
 *
 */


#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
