#include "level9.h"
#include "ui_level9.h"
#include<QPixmap>
#include <QApplication>
#include <QMessageBox>
extern int points;
level9::level9(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::level9)
{
    ui->setupUi(this);

    QPixmap pix("C:/Users/cascade/Documents/braincode-main/pictures/questions/raven_c12.jpg");
    ui->label_a9->setPixmap(pix);

    Level10 = new level10();
}

level9::~level9()
{
    delete ui;
}



void level9::on_Next_clicked()
{
    Level10 ->show();


    if (ui->q9_2->isChecked())
    {
        // Increment points if the answer is correct
        points++;
        qDebug() << "Points incremented: " << points;}
}

void level9::on_q9_2_toggled(bool checked)
{
}

void level9::on_quit_clicked()
{
    qApp->quit();
}
void level9::on_how_clicked()
{
    QMessageBox::information(this, "How to play?", "Pick the correct option that fits in the missing block");
}
