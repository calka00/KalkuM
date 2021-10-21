#include "kalkum.h"

#include <QApplication>
#include <QLabel>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    KalkuM w;
    w.setWindowTitle("Kalkulator Macierzy");
    w.resize(720,720);
    w.show();
    return a.exec();
}
