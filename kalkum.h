#ifndef KALKUM_H
#define KALKUM_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class KalkuM; }
QT_END_NAMESPACE

class KalkuM : public QMainWindow
{
    Q_OBJECT

public:
    KalkuM(QWidget *parent = nullptr);
    ~KalkuM();



private slots:
    void on_comboBox_activated(int arg1);
    void dodawanie_przycisk();
    void odejmowanie_przycisk();
    void mnozenie_przycisk();
    void wyznacznik_przycisk();
    void odwrotna_przycisk();

private:
    Ui::KalkuM *ui;
    int liczenie_wyznacznik(int a, int b, int c, int d);
    int liczenie_wyznacznik3(int a1, int a2, int a3, int b1, int b2, int b3, int c1, int c2, int c3);
};
#endif // KALKUM_H
