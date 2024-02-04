#include "level6.h"
#include "ui_level6.h"

#include <QMessageBox>
#include <QApplication>
#include<QPixmap>
extern int points;
level6::level6(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::level6)
{
    ui->setupUi(this);

    QPixmap pix("C:/Users/cascade/Documents/braincode-main/pictures/questions/raven_b12.jpg");
    ui->label_a6->setPixmap(pix);

     Level7 = new level7();

}

level6::~level6()
{
    delete ui;
}

void level6::on_Next_clicked()
{
    Level7 ->show();

    if (ui->q6_5->isChecked())
    {
        // Increment points if the answer is correct
        points++;
        qDebug() << "Points incremented: " << points;}
}

void level6::on_q6_5_toggled(bool checked)
{}

void level6::on_quit_clicked()
{
    qApp->quit();
}
void level6::on_how_clicked()
{
    QMessageBox::information(this, "How to play?", "Pick the correct option that fits in the missing block");
}
