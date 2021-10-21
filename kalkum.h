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

;

private slots:
    void on_comboBox_activated(const QString &arg1);

private:
    Ui::KalkuM *ui;
};
#endif // KALKUM_H
