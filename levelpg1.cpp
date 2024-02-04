#include "levelpg1.h"
#include "ui_levelpg1.h"
#include <QMessageBox>
#include <QApplication>

levelpg1::levelpg1(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::levelpg1)
{
    ui->setupUi(this);
    Level1 = new level1();
    Level2 = new level2();
    Level3 = new level3();
    Level4 = new level4();
    Level5 = new level5();
    Level6 = new level6();
    Level7 = new level7();
    Level8 = new level8();
    Level9 = new level9();
    Level10 = new level10();
    Level11 = new level11();
    Level12 = new level12();
    Level13 = new level13();
    Level14 = new level14();
    Level15 = new level15();



}

levelpg1::~levelpg1()
{
    delete Level1;
    delete Level2;
    delete Level3;
    delete Level4;
    delete Level5;
    delete Level6;
    delete Level7;
    delete Level8;
    delete Level9;
    delete Level10;
    delete Level11;
    delete Level12;
    delete Level13;
    delete Level14;
    delete Level15;
    delete ui;

}

void levelpg1::on_quit_clicked()
{
      qApp->quit();
}

void levelpg1::on_l1_clicked()
{
    Level1->show();
}

void levelpg1::on_l2_clicked()
{
    Level2->show();
}

void levelpg1::on_l3_clicked()
{
    Level3->show();
}

void levelpg1::on_l4_clicked()
{
    Level4->show();
}

void levelpg1::on_l5_clicked()
{
    Level5->show();
}

void levelpg1::on_l6_clicked()
{
    Level6->show();
}

void levelpg1::on_l7_clicked()
{
    Level7->show();
}

void levelpg1::on_l8_clicked()
{
    Level8->show();
}

void levelpg1::on_l9_clicked()
{
    Level9->show();
}

void levelpg1::on_l10_clicked()
{
    Level10->show();
}

void levelpg1::on_l11_clicked()
{
    Level11->show();
}

void levelpg1::on_l12_clicked()
{
    Level12->show();
}

void levelpg1::on_l13_clicked()
{
    Level13->show();
}

void levelpg1::on_l14_clicked()
{
    Level14->show();
}

void levelpg1::on_l15_clicked()
{
    Level15->show();
}


void levelpg1::on_how_clicked()
{
    QMessageBox::information(this, "How to play?", "Pick the correct option that fits in the missing block");
}


