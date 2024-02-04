#include "level13.h"
#include "ui_level13.h"
#include<QPixmap>
#include <QMessageBox>

#include <QApplication>
extern int points;
level13::level13(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::level13)
{
    ui->setupUi(this);

    QPixmap pix("C:/Users/cascade/Documents/braincode-main/pictures/questions/raven_e1.jpg");
    ui->label_b1->setPixmap(pix);

    Level14 = new level14();
}

level13::~level13()
{
    delete ui;
}

void level13::on_Next_clicked()
{
    Level14 ->show();


    if (ui->q13_7->isChecked())
    {
        // Increment points if the answer is correct
        points++;
        qDebug() << "Points incremented: " << points;}
}

void level13::on_quit_clicked()
{
    qApp->quit();
}




void level13::on_q13_7_toggled(bool checked)
{

}

void level13::on_how_clicked()
{
    QMessageBox::information(this, "How to play?", "Pick the correct option that fits in the missing block");
}
