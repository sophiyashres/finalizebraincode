#include "level14.h"
#include "ui_level14.h"
#include<QPixmap>

#include <QMessageBox>
#include <QApplication>
extern int points;

level14::level14(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::level14)
{
    ui->setupUi(this);

    QPixmap pix("C:/Users/cascade/Documents/braincode-main/pictures/questions/raven_e6.jpg");
    ui->label_b2->setPixmap(pix);

    Level15 = new level15();
}

level14::~level14()
{
    delete ui;
}


void level14::on_Next_clicked()
{
    Level15 ->show();


    if (ui->q14_5->isChecked())
    {
        // Increment points if the answer is correct
        points++;
        qDebug() << "Points incremented: " << points;}
}

void level14::on_q14_5_toggled(bool checked)
{}

void level14::on_quit_clicked()
{
    qApp->quit();
}
void level14::on_how_clicked()
{
    QMessageBox::information(this, "How to play?", "Pick the correct option that fits in the missing block");
}
