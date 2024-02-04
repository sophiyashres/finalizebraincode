#include "level12.h"
#include "ui_level12.h"
#include<QPixmap>

#include <QMessageBox>
#include <QApplication>
extern int points;
level12::level12(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::level12)
{
    ui->setupUi(this);

    QPixmap pix("C:/Users/cascade/Documents/braincode-main/pictures/questions/raven_d12.jpg");
    ui->label_a12->setPixmap(pix);

    Level13 = new level13();
}

level12::~level12()
{
    delete ui;
}

void level12::on_Next_clicked()
{
    Level13 ->show();


    if (ui->q12_6->isChecked())
    {
        // Increment points if the answer is correct
        points++;
        qDebug() << "Points incremented: " << points;}
}

void level12::on_q12_6_toggled(bool checked)
{

}
void level12::on_quit_clicked()
{
    qApp->quit();
}

void level12::on_how_clicked()
{
    QMessageBox::information(this, "How to play?", "Pick the correct option that fits in the missing block");
}
