#include "level1.h"
#include "ui_level1.h"

#include <QMessageBox>
#include <QApplication>
#include<QPixmap>

int points = 0;

level1::level1(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::level1)
{

    //constructor
    ui->setupUi(this);

    QPixmap pix("C:/Users/cascade/Documents/braincode-main/pictures/questions/raven_a1.jpg");
    ui->label_a1->setPixmap(pix);


    Level2 = new level2();
    connect(ui->q1_4, &QRadioButton::toggled, this, &level1::on_q1_4_toggled);

}

level1::~level1()
{
    delete ui;
    delete Level2;
}

void level1::on_Next_clicked()
{
    Level2 ->show();
    if (ui->q1_4->isChecked())
    {
        // Increment points if the answer is correct
        points++;
        qDebug() << "Points incremented: " << points;}

}

void level1::on_q1_4_toggled(bool checked){}



void level1::on_quit_clicked()
{
     qApp->quit();
}

void level1::on_how_clicked()
{
    QMessageBox::information(this, "How to play?", "Pick the correct option that fits in the missing block");
}
