#ifndef CHOICE_H
#define CHOICE_H

#include <QMainWindow>

namespace Ui {
    class choice;
}

class choice : public QMainWindow
{
    Q_OBJECT

public:
    explicit choice(QWidget *parent = 0);
    ~choice();
public slots:
    void changeFormReg();

private:
    Ui::choice *ui;
};

#endif // CHOICE_H
