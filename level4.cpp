#include "level4.h"
#include "ui_level4.h"
#include<QPixmap>

#include <QApplication>
#include <QMessageBox>
extern int points;

level4::level4(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::level4)
{
    ui->setupUi(this);

    QPixmap pix("C:/Users/cascade/Documents/braincode-main/pictures/questions/raven_b5.jpg");
    ui->label_a4->setPixmap(pix);

     Level5 = new level5();
}

level4::~level4()
{
    delete ui;
}

void level4::on_Next_clicked()
{
    Level5 ->show();
    if (ui->q4_1->isChecked())
    {
        // Increment points if the answer is correct
        points++;
        qDebug() << "Points incremented: " << points;}
}


void level4::on_q4_1_toggled(bool checked){}

void level4::on_quit_clicked()
{
    qApp->quit();
}

void level4::on_how_clicked()
{
    QMessageBox::information(this, "How to play?", "Pick the correct option that fits in the missing block");
}
