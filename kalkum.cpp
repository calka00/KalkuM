#include "kalkum.h"
#include "ui_kalkum.h"

KalkuM::KalkuM(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::KalkuM)
{
    ui->setupUi(this);
}

KalkuM::~KalkuM()
{
    delete ui;
}





