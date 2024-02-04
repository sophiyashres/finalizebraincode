#include "level5.h"
#include "ui_level5.h"
#include<QPixmap>

#include <QMessageBox>
#include <QApplication>
extern int points;

level5::level5(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::level5)
{
    ui->setupUi(this);
    QPixmap pix("C:/Users/cascade/Documents/braincode-main/pictures/questions/raven_b8.jpg");
    ui->label_a5->setPixmap(pix);

     Level6 = new level6();
}

level5::~level5()
{
    delete ui;
}

void level5::on_Next_clicked()
{
    Level6 ->show();
    if (ui->q5_6->isChecked())
    {
        // Increment points if the answer is correct
        points++;
        qDebug() << "Points incremented: " << points;}
}


void level5::on_q5_6_toggled(bool checked)
{}

void level5::on_quit_clicked()
{
    qApp->quit();
}
void level5::on_how_clicked()
{
    QMessageBox::information(this, "How to play?", "Pick the correct option that fits in the missing block");
}
