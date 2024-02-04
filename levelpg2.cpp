#include "levelpg2.h"
#include "ui_levelpg2.h"

levelpg2::levelpg2(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::levelpg2)
{
    ui->setupUi(this);

    Level13 = new level13();
    Level14 = new level14();
    Level15 = new level15();

}

levelpg2::~levelpg2()
{

    delete Level13;
    delete Level14;
    delete Level15;

    delete ui;
}



void levelpg2::on_pushButton13_clicked()
{
     Level13 ->show();

}


void levelpg2::on_pushButton14_clicked()
{
     Level14 ->show();

}


void levelpg2::on_pushButton15_clicked()
{
     Level15 ->show();

}



