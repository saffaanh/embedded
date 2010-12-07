#include "addinfo.h"
#include "ui_addinfo.h"
#include "mainwindow.h"
#include <QValidator>
#include <QMessageBox>
#include <QKeyEvent>
#include <Qt>
addInfo::addInfo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addInfo)
{
    ui->setupUi(this);
}

addInfo::~addInfo()
{
    delete ui;
}

void addInfo::accept()
{
    int clear =0;
    QMessageBox msgBox;
    foreach(QLineEdit *details, findChildren<QLineEdit*>()){
        if(details->text() == ""){
            clear =1;
        }
    }
    if (clear == 1){
            msgBox.setText("Please fill in all the boxes!");
            msgBox.setWindowModality(Qt::ApplicationModal);
            msgBox.exec();
        }
    clear=0;

}

void addInfo::clear()
{
   QMessageBox msgBox;
   msgBox.setText("You will lose all data entered.");
   msgBox.setStandardButtons(QMessageBox::Yes | QMessageBox::No);

   switch(msgBox.exec()){
   case QMessageBox::Yes:
       foreach(QLineEdit *details, findChildren<QLineEdit*>())
           details->clear();
       break;
   }

}

void addInfo::exitapp()
{
    QMessageBox msgBox;
    msgBox.setText("Are you sure you want to exit?");
    msgBox.setStandardButtons(QMessageBox::Yes | QMessageBox::No);

    switch(msgBox.exec()){
    case QMessageBox::Yes:
        exit(0);

    }
}

void addInfo::number(){
    QMessageBox msgBox;
    QString Number = ui->mobileLine->text();
    foreach(QChar ch, Number){
        if(ch.isLetter()||ch.isSymbol()||ch.isMark()||ch.isPunct()){
            msgBox.setText("Numbers only");
            msgBox.setWindowModality(Qt::ApplicationModal);
            msgBox.exec();
            ui->mobileLine->backspace();

        }
    }
}

void addInfo::letter(){
    QMessageBox msgBox;
    QString first = ui->firstLine->text();
    QString surname = ui->surnameLine->text();
    foreach(QChar ch, first){
        if(ch.isNumber()||ch.isSymbol()||ch.isMark()){
            msgBox.setText("Letters only");
            msgBox.setWindowModality(Qt::ApplicationModal);
            msgBox.exec();
            ui->firstLine->backspace();
        }
    }

        foreach(QChar ch, surname){
            if(ch.isNumber()||ch.isSymbol()||ch.isMark()){
                msgBox.setText("Letters only");
                msgBox.setWindowModality(Qt::ApplicationModal);
                msgBox.exec();
                ui->surnameLine->backspace();

    }
        }
    }
void addInfo::keyPressEvent(QKeyEvent *e){
    if((e->key() == Qt::Key_Enter) || (e->key() == Qt::Key_Return)){
        addInfo::accept();
    }
    }
