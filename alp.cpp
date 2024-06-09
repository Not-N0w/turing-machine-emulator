#include "alp.h"
#include "ui_alp.h"

alp::alp(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::alp)
{
    ui->setupUi(this);
}

alp::~alp()
{
    delete ui;
}
void alp::dropError(QString mess) {
    QMessageBox msgBox;
    msgBox.setStyleSheet("QLabel{min-width: 300px;}");
    msgBox.setText(mess);
    msgBox.exec();
}

void alp::on_pushButton_clicked()
{
    QString s = ui->alp_->text() + "λ" + ui->ealp->text();
    for(int i = 0; i < s.size(); ++i) {
        if(s[i] == '!' || s[i] == 'R' || s[i] == 'L' || s[i] == '_') {
            dropError("Недопустимый символ: " + QString(s[i]));
            return;
        }
        else {
            for(int j = 0; j < s.size(); ++j) {
                if(j != i && s[i] == s[j]) {
                    dropError("Повторяющийся символ: " + QString(s[i]));
                    return;
                }
            }
        }
    }
    if(s == "λ") {
        dropError("Пустовато((");
        return;
    }
     emit signal(ui->alp_->text() + "λ" + ui->ealp->text());

     close();
}

