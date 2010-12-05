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
    ui->firstLine->clear();
    ui->surnameLine->clear();
    ui->holidayLine->clear();
    ui->mobileLine->clear();
    ui->vehicleLine->clear();
    ui->addressLine->clear();
    ui->PostcodeLine->clear();

}

void addInfo::reject()
{
   ui->firstLine->clear();
   ui->surnameLine->clear();
   ui->holidayLine->clear();
   ui->mobileLine->clear();
   ui->vehicleLine->clear();
   ui->addressLine->clear();
   ui->PostcodeLine->clear();
}

void addInfo::exitapp()
{
   exit(0);
}

void addInfo::number(){
    QMessageBox msgbox;
    QString Number = ui->mobileLine->text();
    foreach(QChar ch, Number){
        if(ch.isLetter()||ch.isSymbol()||ch.isMark()||ch.isPunct()){
            msgbox.setText("Numbers only");
            msgbox.setWindowModality(Qt::ApplicationModal);
            msgbox.exec();
            ui->mobileLine->backspace();

        }
    }
}

void addInfo::keyPressEvent(QKeyEvent *e){
    if((e->key() == Qt::Key_Enter) || (e->key() == Qt::Key_Return)){
        addInfo::accept();
    }
    }
