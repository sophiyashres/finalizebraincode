#ifndef LEVEL6_H
#define LEVEL6_H

#include <QWidget>
#include "level7.h"


namespace Ui {
class level6;
}

class level6 : public QWidget
{
    Q_OBJECT

public:
    explicit level6(QWidget *parent = nullptr);
    ~level6();

private slots:
    void on_Next_clicked();
    void on_quit_clicked();
void on_how_clicked();
    void on_q6_5_toggled(bool checked);

private:
    Ui::level6 *ui;

    level7 *Level7;
};

#endif // LEVEL6_H
