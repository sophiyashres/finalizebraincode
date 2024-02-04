#ifndef LEVEL14_H
#define LEVEL14_H

#include <QWidget>
#include "level15.h"

namespace Ui {
class level14;
}

class level14 : public QWidget
{
    Q_OBJECT

public:
    explicit level14(QWidget *parent = nullptr);
    ~level14();

private slots:
    void on_Next_clicked();
    void on_quit_clicked();
void on_how_clicked();
    void on_q14_5_toggled(bool checked);

private:
    Ui::level14 *ui;

     level15 *Level15;
};

#endif // LEVEL14_H
