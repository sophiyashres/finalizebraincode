#include "login.h"
#include "ui_login.h"
#include<QPixmap>
#include<QMessageBox>

login::login(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::login)
{
    ui->setupUi(this);


}

login::~login()
{
    delete ui;
}

void login::on_pushButton_login_clicked()
{
    QString username = ui->lineEdit_username->text();

   if (username.isEmpty()){ QMessageBox::information(this,"Error","Login Failed");}

    else{
    //modal less approach: can access first and second dialog both at same time
    Levelpg1 = new levelpg1(this);//this=mainwindow
    Levelpg1 ->show();}
}

void login::on_pushButton_logincancel_clicked()
{
    QMessageBox::StandardButton reply = QMessageBox:: question(this, "Cancel","Are you sure?",
                                                                                  QMessageBox:: Yes | QMessageBox:: No );
    if (reply == QMessageBox::Yes){
        close();
    }


}

