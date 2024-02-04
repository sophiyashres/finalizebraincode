#include "level10.h"
#include "ui_level10.h"
#include<QPixmap>
#include <QMessageBox>
#include <QApplication>

extern int points;

level10::level10(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::level10)
{
    ui->setupUi(this);


    QPixmap pix("C:/Users/cascade/Documents/braincode-main/pictures/questions/raven_d1.jpg");
    ui->label_a10->setPixmap(pix);



     Level11 = new level11();
}

level10::~level10()
{
    delete ui;
}

void level10::on_Next_clicked()
{
    Level11 ->show();


    if (ui->q10_3->isChecked())
    {
        // Increment points if the answer is correct
        points++;
        qDebug() << "Points incremented: " << points;}
}

void level10::on_q10_3_toggled(bool checked)
{
}

void level10::on_quit_clicked()
{
    qApp->quit();
}
void level10::on_how_clicked()
{
    QMessageBox::information(this, "How to play?", "Pick the correct option that fits in the missing block");
}
