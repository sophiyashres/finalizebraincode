#include "level8.h"
#include "ui_level8.h"
#include"QPixmap"
#include <QMessageBox>
#include <QApplication>
extern int points;
level8::level8(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::level8)
{
    ui->setupUi(this);

    QPixmap pix("C:/Users/cascade/Documents/braincode-main/pictures/questions/raven_c6.jpg");
    ui->label_a8->setPixmap(pix);

    Level9 = new level9();
}

level8::~level8()
{
    delete ui;
}

void level8::on_Next_clicked()
{
    Level9->show();


    if (ui->q8_4->isChecked())
    {
        // Increment points if the answer is correct
        points++;
        qDebug() << "Points incremented: " << points;}
}


void level8::on_q8_4_toggled(bool checked)
{
}
void level8::on_quit_clicked()
{
    qApp->quit();
}

void level8::on_how_clicked()
{
    QMessageBox::information(this, "How to play?", "Pick the correct option that fits in the missing block");
}
