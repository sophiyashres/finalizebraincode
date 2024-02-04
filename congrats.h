#ifndef CONGRATS_H
#define CONGRATS_H

#include <QDialog>

namespace Ui {
class congrats;
}

class congrats : public QDialog
{
    Q_OBJECT

public:
    explicit congrats(QWidget *parent = nullptr);
    ~congrats();

private slots:
    void on_playAgain_clicked();

    void on_goHome_clicked();

    void on_Quit_clicked();

private:
    Ui::congrats *ui;
};

#endif // CONGRATS_H
