#ifndef LEVEL9_H
#define LEVEL9_H

#include <QWidget>
#include"level10.h"

namespace Ui {
class level9;
}

class level9 : public QWidget
{
    Q_OBJECT

public:
    explicit level9(QWidget *parent = nullptr);
    ~level9();

private slots:

    void on_Next_clicked();
    void on_quit_clicked();
void on_how_clicked();
    void on_q9_2_toggled(bool checked);

private:
    Ui::level9 *ui;

    level10 *Level10;
};

#endif // LEVEL9_H
