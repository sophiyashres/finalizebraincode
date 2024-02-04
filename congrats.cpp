#include "congrats.h"
#include "ui_congrats.h"

extern int points;

congrats::congrats(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::congrats)
{
    ui->setupUi(this);

      // Convert points to a QString
    ui->label_2->setText(QString::number(points));
}

congrats::~congrats()
{
    delete ui;
}

void congrats::on_playAgain_clicked()
{

}


void congrats::on_goHome_clicked()
{

}


void congrats::on_Quit_clicked()
{
    qApp->quit();
}

