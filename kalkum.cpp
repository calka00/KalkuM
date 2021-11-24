#include "kalkum.h"
#include "ui_kalkum.h"
#include  <iostream>
#include <QFileDialog>
#include <QMessageBox>
#include <QString>

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
    connect(ui->actionZapisz,SIGNAL(triggered()),this,SLOT(zapisanie_przycisk()));

}
void KalkuM::setValidators(){
    ui->lineEdit->setValidator(new QIntValidator(0,50,this));
}
KalkuM::~KalkuM()
{
    delete ui;
}
void KalkuM::dodawanie_przycisk()
{
    if(ui->gridLayoutWidget_6->isHidden() && !ui->gridWidget_3->isHidden()){
        Eigen::Matrix<double,2,2> a;
        Eigen::Matrix<double,2,2> b;
        a << ui->lineEdit->text().toDouble(), ui->lineEdit_3->text().toDouble(),
              ui->lineEdit_2->text().toDouble(), ui->lineEdit_4->text().toDouble();

        b << ui->lineEdit_6->text().toDouble(), ui->lineEdit_7->text().toDouble(),
              ui->lineEdit_5->text().toDouble(), ui->lineEdit_8->text().toDouble();
            Eigen::Matrix<double,2,2> wynik=a+b;
          pokaz_wynik(wynik);
    }
    else if (!ui->gridLayoutWidget_6->isHidden() && ui->gridWidget_3->isHidden()){
        Eigen::Matrix<double,3,3> a;
        Eigen::Matrix<double,3,3> b;
        a << ui->lineEdit_13->text().toDouble(), ui->lineEdit_14->text().toDouble(), ui->lineEdit_15->text().toDouble(),
                ui->lineEdit_16->text().toDouble(), ui->lineEdit_17->text().toDouble(), ui->lineEdit_18->text().toDouble(),
                ui->lineEdit_19->text().toDouble(), ui->lineEdit_20->text().toDouble(), ui->lineEdit_21->text().toDouble();

        b << ui->lineEdit_22->text().toDouble(), ui->lineEdit_23->text().toDouble(), ui->lineEdit_24->text().toDouble(),
              ui->lineEdit_25->text().toDouble(), ui->lineEdit_26->text().toDouble(), ui->lineEdit_27->text().toDouble(),
              ui->lineEdit_28->text().toDouble(), ui->lineEdit_29->text().toDouble(), ui->lineEdit_30->text().toDouble();

        Eigen::Matrix<double,3,3> wynik=a+b;
         pokaz_wynik(wynik);
    }
}

void KalkuM::pokaz_wynik(Eigen::Matrix<double,2,2> wynik){
        ui->lineEdit_10->setText(QString::number(wynik(0,0)));
        ui->lineEdit_11->setText(QString::number(wynik(0,1)));
        ui->lineEdit_9->setText(QString::number(wynik(1,0)));
        ui->lineEdit_12->setText(QString::number(wynik(1,1)));
    }
void KalkuM::pokaz_wynik(Eigen::Matrix<double,3,3> wynik){
        ui->lineEdit_36->setText(QString::number(wynik(0,0)));
        ui->lineEdit_34->setText(QString::number(wynik(0,1)));
        ui->lineEdit_35->setText(QString::number(wynik(0,2)));
        ui->lineEdit_32->setText(QString::number(wynik(1,0)));
        ui->lineEdit_31->setText(QString::number(wynik(1,1)));
        ui->lineEdit_33->setText(QString::number(wynik(1,2)));
        ui->lineEdit_37->setText(QString::number(wynik(2,0)));
        ui->lineEdit_38->setText(QString::number(wynik(2,1)));
        ui->lineEdit_39->setText(QString::number(wynik(2,2)));
    }


void KalkuM::odejmowanie_przycisk()
{

    if(ui->gridLayoutWidget_6->isHidden() && !ui->gridWidget_3->isHidden()){
        Eigen::Matrix<double,2,2> a;
        Eigen::Matrix<double,2,2> b;
        a << ui->lineEdit->text().toDouble(), ui->lineEdit_3->text().toDouble(),
              ui->lineEdit_2->text().toDouble(), ui->lineEdit_4->text().toDouble();

        b << ui->lineEdit_6->text().toDouble(), ui->lineEdit_7->text().toDouble(),
              ui->lineEdit_5->text().toDouble(), ui->lineEdit_8->text().toDouble();

        Eigen::Matrix<double,2,2> wynik=a-b;
         pokaz_wynik(wynik);
    }
    else if (!ui->gridLayoutWidget_6->isHidden() && ui->gridWidget_3->isHidden()){
        Eigen::Matrix<double,3,3> a;
        Eigen::Matrix<double,3,3> b;

        a << ui->lineEdit_13->text().toDouble(), ui->lineEdit_14->text().toDouble(), ui->lineEdit_15->text().toDouble(),
                ui->lineEdit_16->text().toDouble(), ui->lineEdit_17->text().toDouble(), ui->lineEdit_18->text().toDouble(),
                ui->lineEdit_19->text().toDouble(), ui->lineEdit_20->text().toDouble(), ui->lineEdit_21->text().toDouble();

        b << ui->lineEdit_22->text().toDouble(), ui->lineEdit_23->text().toDouble(), ui->lineEdit_24->text().toDouble(),
              ui->lineEdit_25->text().toDouble(), ui->lineEdit_26->text().toDouble(), ui->lineEdit_27->text().toDouble(),
              ui->lineEdit_28->text().toDouble(), ui->lineEdit_29->text().toDouble(), ui->lineEdit_30->text().toDouble();

        Eigen::Matrix<double,3,3> wynik=a-b;
         pokaz_wynik(wynik);
    }
}

void KalkuM::mnozenie_przycisk()
{
    if  (ui->gridLayoutWidget_6->isHidden() && !ui->gridWidget_3->isHidden()){
        Eigen::Matrix<double,2,2> a;
        Eigen::Matrix<double,2,2> b;

        a << ui->lineEdit->text().toDouble(), ui->lineEdit_3->text().toDouble(),
              ui->lineEdit_2->text().toDouble(), ui->lineEdit_4->text().toDouble();

        b << ui->lineEdit_6->text().toDouble(), ui->lineEdit_7->text().toDouble(),
              ui->lineEdit_5->text().toDouble(), ui->lineEdit_8->text().toDouble();

        Eigen::Matrix<double,2,2> wynik=a*b;
         pokaz_wynik(wynik);
    }
    else if (!ui->gridLayoutWidget_6->isHidden() && ui->gridWidget_3->isHidden()){
        Eigen::Matrix<double,3,3> a;
        Eigen::Matrix<double,3,3> b;

        a << ui->lineEdit_13->text().toDouble(), ui->lineEdit_14->text().toDouble(), ui->lineEdit_15->text().toDouble(),
                ui->lineEdit_16->text().toDouble(), ui->lineEdit_17->text().toDouble(), ui->lineEdit_18->text().toDouble(),
                ui->lineEdit_19->text().toDouble(), ui->lineEdit_20->text().toDouble(), ui->lineEdit_21->text().toDouble();


        b << ui->lineEdit_22->text().toDouble(), ui->lineEdit_23->text().toDouble(), ui->lineEdit_24->text().toDouble(),
              ui->lineEdit_25->text().toDouble(), ui->lineEdit_26->text().toDouble(), ui->lineEdit_27->text().toDouble(),
              ui->lineEdit_28->text().toDouble(), ui->lineEdit_29->text().toDouble(), ui->lineEdit_30->text().toDouble();

        Eigen::Matrix<double,3,3> wynik=a*b;
         pokaz_wynik(wynik);
    }
}
void KalkuM::wyznacznik_przycisk()
{
     if (ui->gridLayoutWidget_6->isHidden() && !ui->gridWidget_3->isHidden()){
         Eigen::Matrix<double,2,2> a;
         a << ui->lineEdit->text().toDouble(), ui->lineEdit_3->text().toDouble(),
               ui->lineEdit_2->text().toDouble(), ui->lineEdit_4->text().toDouble();

      det=a.determinant();
      ui->wynik_skalar->setText(QString::number(det));
       }
    else if (!ui->gridLayoutWidget_6->isHidden() && ui->gridWidget_3->isHidden()){
         Eigen::Matrix<double,3,3> a;
             a << ui->lineEdit_13->text().toDouble(), ui->lineEdit_14->text().toDouble(), ui->lineEdit_15->text().toDouble(),
                   ui->lineEdit_16->text().toDouble(), ui->lineEdit_17->text().toDouble(), ui->lineEdit_18->text().toDouble(),
                   ui->lineEdit_19->text().toDouble(), ui->lineEdit_20->text().toDouble(), ui->lineEdit_21->text().toDouble();
        det=a.determinant();
       ui->wynik_skalar2->setText(QString::number(det));
    }
 }
void KalkuM::odwrotna_przycisk()
{
    if (ui->gridLayoutWidget_6->isHidden() && !ui->gridWidget_3->isHidden()){
        Eigen::Matrix<double,2,2> a;
        a << ui->lineEdit->text().toDouble(), ui->lineEdit_3->text().toDouble(),
              ui->lineEdit_2->text().toDouble(), ui->lineEdit_4->text().toDouble();
       Eigen::Matrix<double,2,2> wynik;
       if(a.determinant()==0){
           ui->wynik_skalar->setText(QString("0! nie ma odwrotnej"));
       }
       else{
       wynik=a.inverse();
       pokaz_wynik(wynik);
       }
 }
    else if (!ui->gridLayoutWidget_6->isHidden() && ui->gridWidget_3->isHidden()){
        Eigen::Matrix<double,3,3> a;
             a << ui->lineEdit_13->text().toDouble(), ui->lineEdit_14->text().toDouble(), ui->lineEdit_15->text().toDouble(),
                   ui->lineEdit_16->text().toDouble(), ui->lineEdit_17->text().toDouble(), ui->lineEdit_18->text().toDouble(),
                   ui->lineEdit_19->text().toDouble(), ui->lineEdit_20->text().toDouble(), ui->lineEdit_21->text().toDouble();

        Eigen::Matrix<double,3,3> wynik;
        if(a.determinant()==0){
            ui->wynik_skalar2->setText(QString("0! nie ma odwrotnej"));
        }
        else{
        wynik=a.inverse();
        pokaz_wynik(wynik);
        }

}
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

void KalkuM::zapisanie_przycisk()
{

    QString path= QFileDialog::getSaveFileName(this, tr("zapisz jako..."), tr("Macierz"), tr("*.txt"));
    QFile file(path);

       if(!file.open(QFile::WriteOnly | QFile::Text)){
            QMessageBox::warning(this, "title","błąd otwarcia");
            }
     QTextStream stream(&file);
     if(ui->widget_3->isHidden()){
        stream << "wynik macierzy \n" << ui->lineEdit_10->text() <<" "<<ui->lineEdit_11->text() <<"\n"<< ui->lineEdit_9->text() <<" "<< ui->lineEdit_12->text() << "\n \n";
        stream << "wyznacznik macierzy: " << det << "\n \n";

     }
     else if(ui->gridWidget_5->isHidden()){
        stream << "wynik macierzy \n" <<
                  ui->lineEdit_36->text() << " " << ui->lineEdit_34->text() << " " << ui->lineEdit_35->text() << "\n" <<
                  ui->lineEdit_32->text() << " " << ui->lineEdit_31->text() << " " << ui->lineEdit_33->text() << "\n" <<
                  ui->lineEdit_37->text() << " " << ui->lineEdit_38->text() << " " << ui->lineEdit_39->text() << "\n \n";
        stream << "wyznacznik macierzy: " << det << "\n \n";
     }
            file.flush();
            file.close();
}
