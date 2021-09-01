/*
 * 1. Klasy bazujące na basic_message
 * 2. Klient/Serwer TCP/IP bazujący na bibliotekach QT
 * 3. Interfejs graficzny z wykorzystaniem QT
 * 4. Serwer połączony z bazą danych, w której przechowywane są informacje
 */

#include "mainwindow.h"
#include <QApplication>
#include "base_question.h"
#include "astronomy_question.h"
#include "nature_question.h"
#include <iostream>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    /*
    AstronomyQuestion astQ(2);
    BaseQuestion* basQ = &astQ;
    std::string returnedMessage = basQ->createQuestionMessage();
    std::cout << "Returned message -> " << returnedMessage << std::endl;
    */

    return a.exec();
}
