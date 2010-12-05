#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <addinfo.h>
#include <QMenuBar>
#include <QDesktopWidget>
#include <QKeyEvent>
#include <Qt>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
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
    addInfo add;


    if (ui->userLine->text() == "" || ui->userPass->text() == ""){
        msgbox.setText("Please fill in your username and/or password!");
        msgbox.setWindowModality(Qt::ApplicationModal);
        msgbox.exec();
}
    else{
    if (ui->userLine->text() == "saff")
        if (ui->userPass->text() == "saff"){
            this->hide();
            add.exec();
       }

    if ((ui->userLine->text() != "saff") || (ui->userPass->text() != "saff")){
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
    addInfo add;
    if (ui->userLine->text() == "" || ui->userPass->text() == ""){
        msgbox.setText("Please fill in your username and/or password!");
        msgbox.setWindowModality(Qt::ApplicationModal);
        msgbox.exec();
}
    else{
    if (ui->userLine->text() == "saff")
        if (ui->userPass->text() == "saff"){
            this->hide();
            add.exec();
       }

    if ((ui->userLine->text() != "saff") || (ui->userPass->text() != "saff")){
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
