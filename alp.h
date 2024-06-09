#ifndef ALP_H
#define ALP_H

#include <QDialog>
#include <QMessageBox>
namespace Ui {
class alp;
}

class alp : public QDialog
{
    Q_OBJECT

public:
    explicit alp(QWidget *parent = nullptr);
    ~alp();

private slots:
    void dropError(QString);
    void on_pushButton_clicked();

private:
    Ui::alp *ui;

signals:
    void signal(QString);
};

#endif // ALP_H
