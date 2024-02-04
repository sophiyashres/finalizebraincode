#include "level2.h"
#include "ui_level2.h"
#include "level1.h"
#include <QMessageBox>
#include <QApplication>
extern int points;

level2::level2(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::level2)
{
    ui->setupUi(this);


    QPixmap pix("C:/Users/cascade/Documents/braincode-main/pictures/questions/raven_a10.jpg");
    ui->label_a2->setPixmap(pix);

    Level3 = new level3();
}

level2::~level2()
{
    delete ui;
}


void level2::on_Next_clicked()
{Level3 ->show();
if (ui->q2_3->isChecked())
    {
        // Increment points if the answer is correct
        points++;
        qDebug() << "Points incremented: " << points;

    Level3 ->show();

}
}

void level2::on_q2_3_toggled(bool checked){}

void level2::on_quit_clicked()
{
    qApp->quit();
}
void level2::on_how_clicked()
{
    QMessageBox::information(this, "How to play?", "Pick the correct option that fits in the missing block");
}
