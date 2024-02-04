#ifndef LEVEL12_H
#define LEVEL12_H

#include <QWidget>
#include"level13.h"

namespace Ui {
class level12;
}

class level12 : public QWidget
{
    Q_OBJECT

public:
    explicit level12(QWidget *parent = nullptr);
    ~level12();

private slots:
    void on_Next_clicked();
    void on_quit_clicked();
void on_how_clicked();
    void on_q12_6_toggled(bool checked);

private:
    Ui::level12 *ui;

     level13 *Level13;
};

#endif // LEVEL12_H
