#include "score.h"
#include "ui_score.h"

#include <QApplication>

extern int points;


score::score(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::score)
{


    ui->setupUi(this);

    ui->result->setText(QString::number(points));



    }

score::~score()
{
    delete ui;

}

void score::on_quit_clicked()
{
     qApp->quit();
}



