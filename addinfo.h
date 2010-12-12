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
    void clear();
    void exitapp();
    void number();
    void letter();
    void carPark(int);

private:
    Ui::addInfo *ui;
    void keyPressEvent(QKeyEvent *e);
};

#endif // ADDINFO_H
