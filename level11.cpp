#include "level11.h"
#include "ui_level11.h"
#include<QPixmap>

#include <QMessageBox>
#include <QApplication>
extern int points;

level11::level11(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::level11)
{
    ui->setupUi(this);

    QPixmap pix("C:/Users/cascade/Documents/braincode-main/pictures/questions/raven_d6.jpg");
    ui->label_a11->setPixmap(pix);

    Level12 = new level12();
}

level11::~level11()
{
    delete ui;
}


void level11::on_Next_clicked()
{
    Level12 ->show();


    if (ui->q11_6->isChecked())
    {
        // Increment points if the answer is correct
        points++;
        qDebug() << "Points incremented: " << points;}
}

void level11::on_q11_6_toggled(bool checked)
{}
void level11::on_quit_clicked()
{
    qApp->quit();
}

void level11::on_how_clicked()
{
    QMessageBox::information(this, "How to play?", "Pick the correct option that fits in the missing block");
}
