#include "choice.h"
#include "ui_choice.h"
#include "addinfo.h"

choice::choice(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::choice)
{
    ui->setupUi(this);
}

choice::~choice()
{
    delete ui;
}

void choice::changeFormReg(){
    addInfo Add;
    this->hide();
    Add.show();
}
