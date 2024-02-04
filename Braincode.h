#ifndef BRAINCODE_H
#define BRAINCODE_H

#include <QMainWindow>


#include"login.h"
#include"Braincode.h"
QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_start_clicked();

    void on_how_clicked();

    void on_quit_clicked();

private:
    Ui::MainWindow *ui;

    levelpg1 *Levelpg1;


};
#endif // BRAINCODE_H
