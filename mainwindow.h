#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

public slots:
        void button();
        void changePass();
private:
    Ui::MainWindow *ui;
    void keyPressEvent(QKeyEvent *e);

private slots:
    void on_actionExit_triggered();
    void on_actionLogin_triggered();
};

#endif // MAINWINDOW_H
