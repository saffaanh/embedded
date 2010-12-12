#include "changepassword.h"
#include "ui_changepassword.h"
#include "mainwindow.h"

changePassword::changePassword(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::changePassword)
{
    ui->setupUi(this);
}

changePassword::~changePassword()
{
    delete ui;
}

void changePassword::changePass(){
    MainWindow mainWin;
    this->hide();

}
