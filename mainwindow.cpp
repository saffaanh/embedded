#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <choice.h>
#include <QMenuBar>
#include <QDesktopWidget>
#include <QKeyEvent>
#include <Qt>
#include <changepassword.h>
//char userDetails[50][6];
//char passDetails[50][6];
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    //userDetails[0] = "saff";
    //userDetails[1] = "test";
    //passDetails[0] = "saff";
    //passDetails[1] = "test";
    ui->setupUi(this);
    QRect geometry = QDesktopWidget().availableGeometry();
    QRect current = frameGeometry();
    setGeometry(geometry.width() / 2 - current.width() / 2,
                            geometry.height() / 2 - current.height() / 2,
                            current.width(),
                            current.height());
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::button()
{
    QMessageBox msgbox;
    choice choiceForm;


    if (ui->userLine->text() == "" || ui->userPass->text() == ""){
        msgbox.setText("Please fill in your username and/or password!");
        msgbox.setWindowModality(Qt::ApplicationModal);
        msgbox.exec();
}
    else{
        for(int i = 0; i < 6; i++)
    if (ui->userLine->text() == "test")
        if (ui->userPass->text() == "test"){
            this->hide();
            choiceForm.show();
       }

       for(int j = 0; j < 6; j++)
    if ((ui->userLine->text() != "test") || (ui->userPass->text() != "test")){
        msgbox.setText("Wrong username and/or password!");
        msgbox.setWindowModality(Qt::ApplicationModal);
        msgbox.exec();
        ui->userLine->clear();
        ui->userPass->clear();
    }
}
}

void MainWindow::on_actionLogin_triggered()
{

    QMessageBox msgbox;
    choice choiceForm;
    if (ui->userLine->text() == "" || ui->userPass->text() == ""){
        msgbox.setText("Please fill in your username and/or password!");
        msgbox.setWindowModality(Qt::ApplicationModal);
        msgbox.exec();
}
    else{
    if (ui->userLine->text() == "test")
        if (ui->userPass->text() == "test"){
            this->hide();
            choiceForm.show();
       }

    if ((ui->userLine->text() != "test") || (ui->userPass->text() != "test")){
        msgbox.setText("Wrong username and/or password!");
        msgbox.setWindowModality(Qt::ApplicationModal);
        msgbox.exec();
        ui->userLine->clear();
        ui->userPass->clear();
    }
}

}

void MainWindow::on_actionExit_triggered()
{
    exit(0);
}

void MainWindow::keyPressEvent(QKeyEvent *e){
    if((e->key() == Qt::Key_Enter) || (e->key() == Qt::Key_Return))
        MainWindow::button();
}

void MainWindow::changePass(){
changePassword chPass;
this->hide();
chPass.exec();
//this->show();
}
