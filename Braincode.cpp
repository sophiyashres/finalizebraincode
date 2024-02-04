#include "Braincode.h"
#include "ui_Braincode.h"
#include<QPixmap>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)

{
    ui->setupUi(this);
    QPixmap pix("C:/Users/cascade/Documents/braincode-main/pictures/backgrounds/braincode.png");
    ui->label_pic->setPixmap(pix);




}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_start_clicked()
{
    Levelpg1 = new levelpg1(this);
    Levelpg1 ->show();

}



void MainWindow::on_quit_clicked()
{
    qApp->quit();
}

