#include "changepassword.h"
#include "ui_changepassword.h"
#include "mainwindow.h"
#include <QMessageBox>

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
QMessageBox msgBox;
    //QString pass(ui->newpassLine->text());
    //QString confirm(ui->confirmPassLine->text());
    //char* newPass = pass.toLatin1().data();
    //char* conf = confirm.toLatin1().data();
    if(QString::compare(ui->newpassLine->text(),ui->confirmPassLine->text(),Qt::CaseSensitive)){
        msgBox.setText("Passwords do not match!");
        msgBox.exec();
    }
    else
        this->close();
}
