#ifndef ADDINFO_H
#define ADDINFO_H

#include <QDialog>

namespace Ui {
    class addInfo;
}

class addInfo : public QDialog
{
    Q_OBJECT

public:
    explicit addInfo(QWidget *parent = 0);
    ~addInfo();

public slots:
    void accept();
    void reject();
    void exitapp();
    void number();

private:
    Ui::addInfo *ui;
    void keyPressEvent(QKeyEvent *e);
};

#endif // ADDINFO_H
