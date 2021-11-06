#include "kalkum.h"
#include "ui_kalkum.h"

KalkuM::KalkuM(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::KalkuM)
{
    ui->setupUi(this);
    ui->gridLayoutWidget_6->hide();
    ui->widget_2->hide();
    ui->widget_3->hide();
    ui->widget_skalar2->hide();
    connect(ui->pushButton_2,SIGNAL(clicked()),this,SLOT(dodawanie_przycisk()));
    connect(ui->pushButton,SIGNAL(clicked()),this,SLOT(odejmowanie_przycisk()));
    connect(ui->pushButton_3,SIGNAL(clicked()),this,SLOT(mnozenie_przycisk()));
    connect(ui->pushButton_4,SIGNAL(clicked()),this,SLOT(wyznacznik_przycisk()));
    connect(ui->pushButton_5,SIGNAL(clicked()),this,SLOT(odwrotna_przycisk()));
    connect(ui->comboBox,SIGNAL(currentIndexChanged(int)),this,SLOT(on_comboBox_activated(int)));
    connect(ui->actionZapisz,SIGNAL(cliced()),this,SLOT(zapisanie_przycisk()));
}

KalkuM::~KalkuM()
{
    delete ui;
}
void KalkuM::dodawanie_przycisk()
{

    int vala1=ui->lineEdit->text().toInt();
    int valb1=ui->lineEdit_6->text().toInt();
    int val3a1=ui->lineEdit_13->text().toInt();
    int val3b1=ui->lineEdit_22->text().toInt();
    int val=vala1+valb1;
    int val3x3=val3a1+val3b1;

    ui->lineEdit_10->setText(QString::number(val));
    ui->lineEdit_36->setText(QString::number(val3x3));


    vala1=ui->lineEdit_3->text().toInt();
    valb1=ui->lineEdit_7->text().toInt();
    val3a1=ui->lineEdit_14->text().toInt();
    val3b1=ui->lineEdit_23->text().toInt();
    val=vala1+valb1;
    val3x3=val3a1+val3b1;

    ui->lineEdit_11->setText(QString::number(val));
    ui->lineEdit_34->setText(QString::number(val3x3));

    vala1=ui->lineEdit_2->text().toInt();
    valb1=ui->lineEdit_5->text().toInt();
    val3a1=ui->lineEdit_15->text().toInt();
    val3b1=ui->lineEdit_24->text().toInt();
    val=vala1+valb1;
    val3x3=val3a1+val3b1;

    ui->lineEdit_9->setText(QString::number(val));
    ui->lineEdit_35->setText(QString::number(val3x3));

    vala1=ui->lineEdit_4->text().toInt();
    valb1=ui->lineEdit_8->text().toInt();
    val3a1=ui->lineEdit_16->text().toInt();
    val3b1=ui->lineEdit_25->text().toInt();
    val=vala1+valb1;
    val3x3=val3a1+val3b1;

    ui->lineEdit_12->setText(QString::number(val));
    ui->lineEdit_32->setText(QString::number(val3x3));


    val3a1=ui->lineEdit_17->text().toInt();
    val3b1=ui->lineEdit_26->text().toInt();
    val3x3=val3a1+val3b1;
    ui->lineEdit_31->setText(QString::number(val3x3));

    val3a1=ui->lineEdit_18->text().toInt();
    val3b1=ui->lineEdit_27->text().toInt();
    val3x3=val3a1+val3b1;
    ui->lineEdit_33->setText(QString::number(val3x3));

    val3a1=ui->lineEdit_19->text().toInt();
    val3b1=ui->lineEdit_28->text().toInt();
    val3x3=val3a1+val3b1;
    ui->lineEdit_37->setText(QString::number(val3x3));

    val3a1=ui->lineEdit_20->text().toInt();
    val3b1=ui->lineEdit_29->text().toInt();
    val3x3=val3a1+val3b1;
    ui->lineEdit_38->setText(QString::number(val3x3));

    val3a1=ui->lineEdit_21->text().toInt();
    val3b1=ui->lineEdit_30->text().toInt();
    val3x3=val3a1+val3b1;
    ui->lineEdit_39->setText(QString::number(val3x3));


}

void KalkuM::odejmowanie_przycisk()
{

    int vala1=ui->lineEdit->text().toInt();
    int valb1=ui->lineEdit_6->text().toInt();
    int val=vala1-valb1;

    ui->lineEdit_10->setText(QString::number(val));

    vala1=ui->lineEdit_3->text().toInt();
    valb1=ui->lineEdit_7->text().toInt();
    val=vala1-valb1;

    ui->lineEdit_11->setText(QString::number(val));

    vala1=ui->lineEdit_2->text().toInt();
    valb1=ui->lineEdit_5->text().toInt();
    val=vala1-valb1;

    ui->lineEdit_9->setText(QString::number(val));

    vala1=ui->lineEdit_4->text().toInt();
    valb1=ui->lineEdit_8->text().toInt();
    val=vala1-valb1;

    ui->lineEdit_12->setText(QString::number(val));

    //3x3
    int val3a1=ui->lineEdit_13->text().toInt();
    int val3b1=ui->lineEdit_22->text().toInt();
    int val3x3=val3a1-val3b1;
    ui->lineEdit_36->setText(QString::number(val3x3));

    val3a1=ui->lineEdit_14->text().toInt();
    val3b1=ui->lineEdit_23->text().toInt();
    val3x3=val3a1-val3b1;
    ui->lineEdit_34->setText(QString::number(val3x3));

    val3a1=ui->lineEdit_15->text().toInt();
    val3b1=ui->lineEdit_24->text().toInt();
    val3x3=val3a1-val3b1;
    ui->lineEdit_35->setText(QString::number(val3x3));

    val3a1=ui->lineEdit_16->text().toInt();
    val3b1=ui->lineEdit_25->text().toInt();
    val3x3=val3a1-val3b1;
    ui->lineEdit_32->setText(QString::number(val3x3));

    val3a1=ui->lineEdit_17->text().toInt();
    val3b1=ui->lineEdit_26->text().toInt();
    val3x3=val3a1-val3b1;
    ui->lineEdit_31->setText(QString::number(val3x3));

    val3a1=ui->lineEdit_18->text().toInt();
    val3b1=ui->lineEdit_27->text().toInt();
    val3x3=val3a1-val3b1;
    ui->lineEdit_33->setText(QString::number(val3x3));


    val3a1=ui->lineEdit_19->text().toInt();
    val3b1=ui->lineEdit_28->text().toInt();
    val3x3=val3a1-val3b1;
    ui->lineEdit_37->setText(QString::number(val3x3));

    val3a1=ui->lineEdit_20->text().toInt();
    val3b1=ui->lineEdit_29->text().toInt();
    val3x3=val3a1-val3b1;
    ui->lineEdit_38->setText(QString::number(val3x3));

    val3a1=ui->lineEdit_21->text().toInt();
    val3b1=ui->lineEdit_30->text().toInt();
    val3x3=val3a1-val3b1;
    ui->lineEdit_39->setText(QString::number(val3x3));




}

void KalkuM::mnozenie_przycisk()
{
    int vala1=ui->lineEdit->text().toInt();
    int valb1=ui->lineEdit_6->text().toInt();
    int vala2=ui->lineEdit_3->text().toInt();
    int valb3=ui->lineEdit_5->text().toInt();
    int val=vala1*valb1+vala2*valb3;

    ui->lineEdit_10->setText(QString::number(val));

    vala1=ui->lineEdit->text().toInt();
    valb1=ui->lineEdit_7->text().toInt();
    vala2=ui->lineEdit_3->text().toInt();
    valb3=ui->lineEdit_8->text().toInt();
    val=vala1*valb1+vala2*valb3;


    ui->lineEdit_11->setText(QString::number(val));

    vala1=ui->lineEdit_2->text().toInt();
    valb1=ui->lineEdit_6->text().toInt();
    vala2=ui->lineEdit_4->text().toInt();
    valb3=ui->lineEdit_5->text().toInt();
    val=vala1*valb1+vala2*valb3;

    ui->lineEdit_9->setText(QString::number(val));

    vala1=ui->lineEdit_2->text().toInt();
    valb1=ui->lineEdit_7->text().toInt();
    vala2=ui->lineEdit_4->text().toInt();
    valb3=ui->lineEdit_8->text().toInt();
    val=vala1*valb1+vala2*valb3;

    ui->lineEdit_12->setText(QString::number(val));
    //3x3

    int val3a1=ui->lineEdit_13->text().toInt();
    int val3a2=ui->lineEdit_14->text().toInt();
    int val3a3=ui->lineEdit_15->text().toInt();
    int val3b1=ui->lineEdit_22->text().toInt();
    int val3b2=ui->lineEdit_25->text().toInt();
    int val3b3=ui->lineEdit_28->text().toInt();
    int val3=val3a1*val3b1+val3a2*val3b2+val3a3*val3b3;
    ui->lineEdit_36->setText(QString::number(val3));

    val3a1=ui->lineEdit_13->text().toInt();
    val3a2=ui->lineEdit_14->text().toInt();
    val3a3=ui->lineEdit_15->text().toInt();
    val3b1=ui->lineEdit_23->text().toInt();
    val3b2=ui->lineEdit_26->text().toInt();
    val3b3=ui->lineEdit_29->text().toInt();
    val3=val3a1*val3b1+val3a2*val3b2+val3a3*val3b3;
    ui->lineEdit_34->setText(QString::number(val3));

    val3a1=ui->lineEdit_13->text().toInt();
    val3a2=ui->lineEdit_14->text().toInt();
    val3a3=ui->lineEdit_15->text().toInt();
    val3b1=ui->lineEdit_24->text().toInt();
    val3b2=ui->lineEdit_27->text().toInt();
    val3b3=ui->lineEdit_30->text().toInt();
    val3=val3a1*val3b1+val3a2*val3b2+val3a3*val3b3;
    ui->lineEdit_35->setText(QString::number(val3));

    val3a1=ui->lineEdit_16->text().toInt();
    val3a2=ui->lineEdit_17->text().toInt();
    val3a3=ui->lineEdit_18->text().toInt();
    val3b1=ui->lineEdit_22->text().toInt();
    val3b2=ui->lineEdit_25->text().toInt();
    val3b3=ui->lineEdit_28->text().toInt();
    val3=val3a1*val3b1+val3a2*val3b2+val3a3*val3b3;
    ui->lineEdit_32->setText(QString::number(val3));

    val3a1=ui->lineEdit_16->text().toInt();
    val3a2=ui->lineEdit_17->text().toInt();
    val3a3=ui->lineEdit_18->text().toInt();
    val3b1=ui->lineEdit_23->text().toInt();
    val3b2=ui->lineEdit_26->text().toInt();
    val3b3=ui->lineEdit_29->text().toInt();
    val3=val3a1*val3b1+val3a2*val3b2+val3a3*val3b3;
    ui->lineEdit_31->setText(QString::number(val3));

    val3a1=ui->lineEdit_16->text().toInt();
    val3a2=ui->lineEdit_17->text().toInt();
    val3a3=ui->lineEdit_18->text().toInt();
    val3b1=ui->lineEdit_24->text().toInt();
    val3b2=ui->lineEdit_27->text().toInt();
    val3b3=ui->lineEdit_30->text().toInt();
    val3=val3a1*val3b1+val3a2*val3b2+val3a3*val3b3;
    ui->lineEdit_33->setText(QString::number(val3));

    val3a1=ui->lineEdit_19->text().toInt();
    val3a2=ui->lineEdit_20->text().toInt();
    val3a3=ui->lineEdit_21->text().toInt();
    val3b1=ui->lineEdit_22->text().toInt();
    val3b2=ui->lineEdit_25->text().toInt();
    val3b3=ui->lineEdit_28->text().toInt();
    val3=val3a1*val3b1+val3a2*val3b2+val3a3*val3b3;
    ui->lineEdit_37->setText(QString::number(val3));

    val3a1=ui->lineEdit_19->text().toInt();
    val3a2=ui->lineEdit_20->text().toInt();
    val3a3=ui->lineEdit_21->text().toInt();
    val3b1=ui->lineEdit_23->text().toInt();
    val3b2=ui->lineEdit_26->text().toInt();
    val3b3=ui->lineEdit_29->text().toInt();
    val3=val3a1*val3b1+val3a2*val3b2+val3a3*val3b3;
    ui->lineEdit_38->setText(QString::number(val3));

    val3a1=ui->lineEdit_19->text().toInt();
    val3a2=ui->lineEdit_20->text().toInt();
    val3a3=ui->lineEdit_21->text().toInt();
    val3b1=ui->lineEdit_24->text().toInt();
    val3b2=ui->lineEdit_27->text().toInt();
    val3b3=ui->lineEdit_30->text().toInt();
    val3=val3a1*val3b1+val3a2*val3b2+val3a3*val3b3;
    ui->lineEdit_39->setText(QString::number(val3));

}
void KalkuM::wyznacznik_przycisk()
{

  int val = liczenie_wyznacznik(ui->lineEdit->text().toInt(),
                        ui->lineEdit_3->text().toInt(),
                        ui->lineEdit_2->text().toInt(),
                        ui->lineEdit_4->text().toInt());

  int val3= liczenie_wyznacznik3(ui->lineEdit_13->text().toInt(),
                                 ui->lineEdit_14->text().toInt(),
                                 ui->lineEdit_15->text().toInt(),
                                 ui->lineEdit_16->text().toInt(),
                                 ui->lineEdit_17->text().toInt(),
                                 ui->lineEdit_18->text().toInt(),
                                 ui->lineEdit_19->text().toInt(),
                                 ui->lineEdit_20->text().toInt(),
                                 ui->lineEdit_21->text().toInt());

    ui->wynik_skalar->setText(QString::number(val));
    ui->wynik_skalar2->setText(QString::number(val3));
}
int KalkuM::liczenie_wyznacznik(int a, int b, int c, int d)
{
    return a*d-c*b;
}

int KalkuM::liczenie_wyznacznik3(int a1, int a2, int a3, int b1, int b2, int b3, int c1, int c2, int c3)
{
    return a1*b2*c3+a2*b3*c1+a3*b1*c2-c1*b2*a3-c2*b3*a1-c3*b1*a2;
}
void KalkuM::odwrotna_przycisk()
{
    double vala1=ui->lineEdit->text().toDouble();
    double vala2=ui->lineEdit_3->text().toDouble();
    double vala3=ui->lineEdit_2->text().toDouble();
    double vala4=ui->lineEdit_4->text().toDouble();
    double valzapas=vala1;
    double wyznacznik=static_cast<double>(liczenie_wyznacznik(vala1, vala2, vala3, vala4));

    vala1=vala4*(1/wyznacznik);
    vala4=valzapas*(1/wyznacznik);
    vala2=vala2*(1/wyznacznik)*(-1);
    vala3=vala3*(1/wyznacznik)*(-1);

    ui->lineEdit_10->setText(QString::number(vala1));
    ui->lineEdit_11->setText(QString::number(vala2));
    ui->lineEdit_9->setText(QString::number(vala3));
    ui->lineEdit_12->setText(QString::number(vala4));

    //3x3
    double val3a1=ui->lineEdit_13->text().toDouble();
    double val3a2=ui->lineEdit_14->text().toDouble();
    double val3a3=ui->lineEdit_15->text().toDouble();
    double val3a4=ui->lineEdit_16->text().toDouble();
    double val3a5=ui->lineEdit_17->text().toDouble();
    double val3a6=ui->lineEdit_18->text().toDouble();
    double val3a7=ui->lineEdit_19->text().toDouble();
    double val3a8=ui->lineEdit_20->text().toDouble();
    double val3a9=ui->lineEdit_21->text().toDouble();

    double val3a11=val3a1;
    double val3a22=val3a2;
    double val3a33=val3a3;
    double val3a44=val3a4;
    double val3a55=val3a5;
    double val3a66=val3a6;
    double val3a77=val3a7;
    double val3a88=val3a8;
    double val3a99=val3a9;

    double wyznacznik3=static_cast<double>(liczenie_wyznacznik3(val3a1, val3a2, val3a3, val3a4, val3a5, val3a6, val3a7, val3a8, val3a9));

    val3a11=(val3a5*val3a9-val3a6*val3a8)*(1/wyznacznik3);
    val3a22=(val3a4*val3a8-val3a6*val3a7)*(-1)*(1/wyznacznik3);
    val3a33=(val3a4*val3a8-val3a5*val3a7)*(1/wyznacznik3);
    val3a44=(val3a2*val3a9-val3a3*val3a8)*(-1)*(1/wyznacznik3);
    val3a55=(val3a1*val3a9-val3a3*val3a7)*(1/wyznacznik3);
    val3a66=(val3a1*val3a8-val3a2*val3a7)*(-1)*(1/wyznacznik3);
    val3a77=(val3a2*val3a6-val3a3*val3a5)*(1/wyznacznik3);
    val3a88=(val3a1*val3a6-val3a3*val3a4)*(-1)*(1/wyznacznik3);
    val3a99=(val3a1*val3a5-val3a2*val3a4)*(1/wyznacznik3);

    ui->lineEdit_36->setText(QString::number(val3a11));
    ui->lineEdit_34->setText(QString::number(val3a44));
    ui->lineEdit_35->setText(QString::number(val3a33));
    ui->lineEdit_32->setText(QString::number(val3a22));
    ui->lineEdit_31->setText(QString::number(val3a55));
    ui->lineEdit_33->setText(QString::number(val3a66));
    ui->lineEdit_37->setText(QString::number(val3a77));
    ui->lineEdit_38->setText(QString::number(val3a88));
    ui->lineEdit_39->setText(QString::number(val3a99));




}

void KalkuM::on_comboBox_activated(int arg1)
{
    if(arg1==1){
        ui->gridLayoutWidget_6->show();
        ui->widget_2->show();
        ui->gridWidget_3->hide();
        ui->gridWidget_4->hide();
        ui->gridWidget_5->hide();
        ui->widget_3->show();
        ui->widget_skalar2->show();
        ui->widget_skalar->hide();

    }
    else {
        ui->gridLayoutWidget_6->hide();
        ui->widget_2->hide();
        ui->gridWidget_3->show();
        ui->gridWidget_4->show();
        ui->widget_3->hide();
        ui->gridWidget_5->show();
        ui->widget_skalar2->hide();
        ui->widget_skalar->show();
    }
}

//void KalkuM::zapisanie_przycisk()
//{


//}
