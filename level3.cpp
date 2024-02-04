#include "level3.h"
#include "ui_level3.h"
#include<QPixmap>

#include <QApplication>
#include <QMessageBox>
extern int points;

level3::level3(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::level3)
{
    ui->setupUi(this);

    QPixmap pix("C:/Users/cascade/Documents/braincode-main/pictures/questions/raven_a12.jpg");
    ui->label_a3->setPixmap(pix);

     Level4 = new level4();
}

level3::~level3()
{
    delete ui;
}

void level3::on_Next_clicked()
{
    Level4 ->show();

    if (ui->q3_5->isChecked())
    {
        // Increment points if the answer is correct
        points++;
        qDebug() << "Points incremented: " << points;}
}

void level3::on_q3_5_toggled(bool checked)
{}

void level3::on_quit_clicked()
{
    qApp->quit();
}

void level3::on_how_clicked()
{
    QMessageBox::information(this, "How to play?", "Pick the correct option that fits in the missing block");
}




