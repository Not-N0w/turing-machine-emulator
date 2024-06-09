#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "alp.h"
#include <QMainWindow>
#include <QPropertyAnimation>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <QMessageBox>
#include <QTimer>
#include <QShortcut>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

using namespace std;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    alp *alpWindow;

private slots:
    void it_move_right();
    void it_move_left();
    void on_pushButton_4_clicked();
    void on_pushButton_9_clicked();
    void on_pushButton_10_clicked();
    void tableHeadFill();
    void on_pushButton_3_clicked();
    void Error(QString);
    void lent_fill();

    void step();
    void on_go_clicked();

    void on_pause_clicked();

    void on_step_clicked();

    void on_stop_clicked();

    void on_pushButton_11_clicked();

    void on_pushButton_12_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_clicked();
    bool cellCheck(string);
    bool isItNum(string);
    bool tableCheck();

public slots:
    void setAlp(QString str);
};
#endif // MAINWINDOW_H
