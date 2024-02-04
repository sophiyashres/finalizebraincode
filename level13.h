#ifndef LEVEL13_H
#define LEVEL13_H

#include <QWidget>
#include"level14.h"

namespace Ui {
class level13;
}

class level13 : public QWidget
{
    Q_OBJECT

public:
    explicit level13(QWidget *parent = nullptr);
    ~level13();

private slots:
    void on_how_clicked();

    void on_quit_clicked();


    void on_Next_clicked();

    void on_q13_7_toggled(bool checked);

private:
    Ui::level13 *ui;

     level14 *Level14;
};

#endif // LEVEL13_H
