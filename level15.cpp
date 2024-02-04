#include "level15.h"
#include "ui_level15.h"
#include<QPixmap>
#include <QMessageBox>
#include <QApplication>

extern int points;

level15::level15(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::level15)
{
    ui->setupUi(this);

    QPixmap pix("C:/Users/cascade/Documents/braincode-main/pictures/questions/raven_e12.jpg");
    ui->label_b3->setPixmap(pix);

}

level15::~level15()
{
    delete ui;
}

void level15::on_finish_clicked()
{
    if (ui->q15_5->isChecked())
    {
        // Increment points if the answer is correct
        points++;
        qDebug() << "Points incremented: " << points;}

    Score = new score();
    Score-> show();

}


void level15::on_q15_5_toggled(bool checked)
{}

void level15::on_quit_clicked()
{
    qApp->quit();
}

void level15::on_how_clicked()
{
    QMessageBox::information(this, "How to play?", "Pick the correct option that fits in the missing block");
}
