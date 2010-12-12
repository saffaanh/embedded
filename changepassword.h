#ifndef CHANGEPASSWORD_H
#define CHANGEPASSWORD_H

#include <QDialog>

namespace Ui {
    class changePassword;
}

class changePassword : public QDialog
{
    Q_OBJECT

public:
    explicit changePassword(QWidget *parent = 0);
    ~changePassword();

public slots:
    void changePass();

private:
    Ui::changePassword *ui;
};

#endif // CHANGEPASSWORD_H
