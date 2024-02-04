#include "level7.h"
#include "ui_level7.h"
#include<QPixmap>
#include <QMessageBox>
#include <QApplication>
extern int points;
level7::level7(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::level7)
{
    ui->setupUi(this);

    QPixmap pix("C:/Users/cascade/Documents/braincode-main/pictures/questions/raven_c1.jpg");
    ui->label_a7->setPixmap(pix);

    Level8 = new level8();
}

level7::~level7()
{
    delete ui;
}

void level7::on_Next_clicked()
{
    Level8->show();


    if (ui->q7_8->isChecked())
    {
        // Increment points if the answer is correct
        points++;
        qDebug() << "Points incremented: " << points;}
}


void level7::on_q7_8_toggled(bool checked)
{}
void level7::on_quit_clicked()
{
    qApp->quit();
}

void level7::on_how_clicked()
{
    QMessageBox::information(this, "How to play?", "Pick the correct option that fits in the missing block");
}
