#include "mainwindow.h"
#include "ui_mainwindow.h"

std::vector <QLineEdit*> cells;
QPropertyAnimation* last_animation = NULL;
int lat = 0;
QString alp = "λ", str = "";
float speed = 1,speed_ = 1;
int st = 0;
vector<vector<string>> table(1);

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    cells = {ui->lineEdit, ui->lineEdit_2,ui->lineEdit_3,ui->lineEdit_4,ui->lineEdit_5,ui->lineEdit_6,ui->lineEdit_7,ui->lineEdit_8,ui->lineEdit_9,ui->lineEdit_10,ui->lineEdit_11,ui->lineEdit_12,ui->lineEdit_13};

}

MainWindow::~MainWindow()
{
    delete ui;
}

int anim_time(int dir) {
    return (int) abs(dir)*150 + 300 * (2.0 - speed);
}

void MainWindow::lent_fill() {
    for(int i = 0; i < (int)cells.size(); ++i) {
        cells[i]->setText("");
    }
    for(int i = 0; i < (int)cells.size(); ++i) {
        if(st >= 0) {
            if(i >= st && i-st < str.size()) {
                cells[i]->setText(str[i-st]);
            }
            else {
                cells[i]->setText(" ");
            }
        }
        else {
            if(i + abs(st) < str.size()) {
                cells[i]->setText(str[i + abs(st)]);
            }
            else {
                cells[i]->setText(" ");
            }
        }
    }
}

void MainWindow::Error(QString mess) {
    QMessageBox msgBox;
    msgBox.setText(mess);
    msgBox.exec();
}



bool MainWindow::isItNum(string s)
{
    int n = 0;
    for(int i = 0; i < s.size(); ++i) {
        n += pow(10, s.size() - i - 1) * (s[i]-'0') ;
    }
    if(n >= 0 && ui->table->rowCount() > n) return true;
    return false;
}

bool foundStop = 0;
bool MainWindow::cellCheck(string s) {
    if(s.size() == 0) {
        return true;
    }
    if((s[0] != '!' && s[0] != 'R' && s[0] != 'L' && s[0] != 'q') || (s[0] == 'q' && (s.size() == 1 || (s[1] > '9' && s[1] < '0')))) {
        bool tm = 0;
        for(int i = 0; i < alp.size(); ++i) {
            if(alp[i] == s[0] || s[0] == '_') {
                tm = 1;
            }
        }
        if(!tm) return false;
        if(s.size() == 1) {
            return true;
        }
        else {
            if(s[1] != ' ') {
                return false;
            }
            else {
                if(s[2] == 'R' || s[2] == 'L') {
                    if(s.size() == 3) {
                        return true;
                    }
                    else if(s[3] != ' ') {
                         return false;
                    }
                    else {
                        if(s.size() == 5 && s[4] == '!') {
                            foundStop = true;
                            return true;
                        }
                        else if(s[4] == 'q' && s.size() > 5 && isItNum(s.substr(5, s.size()))) {
                            return true;
                        }
                        else {
                            return false;
                        }
                    }
                }
                else if(s[2] == '!') {
                    foundStop = true;
                    if(s.size() == 3) {
                        return true;
                    }
                    else {
                        return false;
                    }
                }
                else if(s[2] == 'q' && isItNum(s.substr(3,s.size()))) {
                    return true;
                }
            }
        }
    }
    else if(s[0] == 'R' || s[0] == 'L') {
        if(s.size() == 1) {
            return true;
        }
        else {
            if(s[1] == ' ') {
                if(s.size() > 2) {
                    if(s[2] == '!' && s.size() == 3) {
                        foundStop = true;
                        return true;
                    }
                    else if(s[2] == 'q' && isItNum(s.substr(3,s.size()))) {
                        return true;
                    }
                    else {
                        return false;
                    }
                }
                else {
                    return false;
                }
            }
            else {
                return false;
            }
        }
    }
    else if(s[0] == 'q' && isItNum(s.substr(1,s.size()))) {
        return true;
    }
    else if(s[0] == '!' && s.size() == 1) {
        foundStop = true;
        return true;
    }
    else {
        return false;
    }
}

bool MainWindow::tableCheck() {
    foundStop = 0;
    for(int i = 0; i < table.size(); ++i) {
        for(int j = 0; j < table[i].size(); ++j) {
            if(!cellCheck(table[i][j])) {
                Error("Ошибка в клетке: (" + QString::fromStdString(to_string(i + 1)) + ", " + QString::fromStdString(to_string(j + 1)) + ") -> {" + QString::fromStdString(table[i][j]) + "}");
                return false;
            }
        }
    }
    if(!foundStop) {
        Error("И где конец?!");
        return false;
    }
    if(table.size() == 0) {
        Error("Ошибка в клетке: 0 0");
        return false;
    }
    return true;
}

void MainWindow::tableHeadFill()
{
    QStringList head;

    while(ui->table->columnCount() > 0) {
        ui->table->removeColumn(0);
    }
    for(int i = 0; i < alp.size(); ++i) {
        ui->table->insertColumn(0);
        head << QString(alp[i]);
    }
    ui->alp_box->setText(alp);
    ui->table->setHorizontalHeaderLabels(head);
}

void MainWindow::it_move_right() {
    if (last_animation == NULL || last_animation->currentTime() > lat-1) {
        //ui->it->move(ui->it->pos().x() + 80,0);
        speed = speed_;
        QPropertyAnimation* animation = new QPropertyAnimation(ui->it, "geometry");
        animation->setDuration(anim_time(1)); //время анимации
        animation->setStartValue(ui->it->geometry()); // состояние объкта в начале анимации
        animation->setEndValue(ui->it->geometry().translated(81, 0));  //trans на сколько делаем сдвиг во время анимации
        animation->setEasingCurve(QEasingCurve::InOutQuad); // стиль анимации
        animation->start();
        last_animation = animation;
        lat = anim_time(1);
    }
}

void MainWindow::it_move_left() {
    //ui->it->move(ui->it->pos().x() - 80,0);
    if (last_animation == NULL || last_animation->currentTime() > lat - 1) {
        speed = speed_;
        QPropertyAnimation* animation = new QPropertyAnimation(ui->it, "geometry");
        animation->setDuration(anim_time(1)); //время анимации
        animation->setStartValue(ui->it->geometry()); // состояние объкта в начале анимации
        animation->setEndValue(ui->it->geometry().translated(-81, 0));  //trans на сколько делаем сдвиг во время анимации
        animation->setEasingCurve(QEasingCurve::InOutQuad);
        animation->start();
        last_animation = animation;
        lat = anim_time(1);
    }
}
void MainWindow::setAlp(QString str)
{
    alp = str;
    tableHeadFill();
}

void MainWindow::on_pushButton_4_clicked()
{
    alpWindow = new class alp;
    alpWindow->setModal(true);
    connect(alpWindow, &alp::signal, this, &MainWindow::setAlp);
    alpWindow->show();

}


void MainWindow::on_pushButton_9_clicked()
{
    QStringList head;
    ui->table->insertRow(ui->table->rowCount());

    for(int i = 0; i < ui->table->rowCount(); ++i) {
        head << "q" + QString::fromStdString(to_string(i));
    }
    ui->table->setVerticalHeaderLabels(head);
}


void MainWindow::on_pushButton_10_clicked()
{
    if(ui->table->rowCount() > 1) {
        ui->table->removeRow(ui->table->rowCount() - 1);
    }
}

bool findin(string a, char b) {
    for(int i = 0; i < a.size(); ++i) {
        if(a[i] == b) {
            return 1;
        }
    }
    return 0;
}

void MainWindow::on_pushButton_3_clicked()
{
    if(str != ui->str->text()) {
        bool isOk = 1;
        for(int i = 0; i < ui->str->text().size(); ++i) {
            if(ui->str->text()[i] == 'L' || ui->str->text()[i] == 'R' || QString(ui->str->text()[i]) == "λ" || ui->str->text()[i] == '!' || !findin(alp.toStdString(), ui->str->text().toStdString()[i])) {
                Error("Неккоректная строка (" + QString(ui->str->text()[i]) + ")");
                isOk = 0;
                break;
            }
        }
        if(!isOk) return;

        str = ui->str->text();
        st = 0;
        lent_fill();
        ui->it->move(4,0);
    }
}
int ii = 0, jj = 0, nj = 0, ni = 0, cur = 0, cil = 0;
bool paused = 0, isGoing = 0, stopped = 0, need_one = 0;


void MainWindow::step() {
    if(stopped) {
        ui->it->move(2,0);
        return;
    }
    if((isGoing && !paused) || need_one ) {
        if(cur < 0) {
            str= " " + str;
            cur = 0;
            st--;
        }
        if(cur > str.size() - 1) {
            str += " ";
            cur = str.size() - 1;
        }
        for(int h = 0; h < alp.size(); ++h) {
            QString tmp = QChar(955);
            if(alp[h] == str[cur] || (QString(alp[h]) == "λ" && str[cur] == ' ')) {
                ii = h;
                break;
            }
        }
        int extra_wait = 0;
        string s;
        ui->table->item(nj,ni)->setBackground(QColor(255, 255, 255, 255));
        ui->table->item(jj,ii)->setBackground(QColor(255, 200, 200, 255));
        ni=ii, nj=jj;
        for(int i = 0; i < table[ii][jj].size() + 1; ++i) {
            if(i != table[ii][jj].size() && table[ii][jj][i] != ' ') {
                s.push_back(table[ii][jj][i]);
            }
            else {
                if(s.size() == 1) {
                    if(s[0] == '!') {
                        paused = false;
                        isGoing = false;
                        ui->step->setEnabled(0);
                        ui->pause->setEnabled(0);
                        need_one = 0;
                        return;
                    }
                    else if(s[0] == 'R') {
                        if(cil == cells.size() - 1) {
                            cil-=4;
                            ui->it->move(ui->it->pos().x()-(81*4),0);
                            st-=4;
                            lent_fill();
                            extra_wait += 50;
                        }

                        QTimer::singleShot(extra_wait, this, SLOT(it_move_right()));
                        extra_wait += anim_time(1);
                        cil++;
                        cur++;
                    }
                    else if(s[0] == 'L') {
                        if(cil == 0) {
                            cil+=4;
                            st+=4;
                            ui->it->move(ui->it->pos().x()+(81*4),0);
                            lent_fill();
                            extra_wait += 50;
                        }
                        QTimer::singleShot(extra_wait, this, SLOT(it_move_left()));
                        extra_wait += anim_time(1);
                        cil--;
                        cur--;
                    }
                    else {
                        if(cur < 0) {
                            str= " " + str;
                            cur = 0;

                            st--;
                        }
                        if(cur > str.size() - 1) {
                            str += " ";
                            cur = str.size() - 1;
                        }
                        if(s[0] == '_') {
                            str[cur] = ' ';
                        }
                        else {
                            str[cur] = s[0];
                        }
                        lent_fill();
                    }

                }
                else {
                    int x = 0;
                    for(int j = 0; j < s.size(); ++j) {
                        if(s[j] != 'q') {
                            x += pow(10, s.size() - j - 1) * (s[j] - '0');
                        }
                    }
                    jj = x;
                    s = "";
                    break;
                }
                s = "";
                continue;
            }

        }
        need_one = 0;
        if(!paused) {
            QTimer::singleShot(400 + extra_wait, this, SLOT(step()));
        }
    }
}

void MainWindow::on_go_clicked()
{
    table.resize(alp.size());
    for(int i = 0; i < ui->table->columnCount(); ++i) {
        table[i].resize(ui->table->rowCount());
    }
    for(int i = 0; i < ui->table->columnCount(); ++i) {
        for(int j = 0; j < ui->table->rowCount(); ++j) {
            if(ui->table->item(j,i) == NULL) {
                table[i][j] = "";
                QTableWidgetItem *newItem = new QTableWidgetItem(tr("").arg(pow(j, i+1)));
                ui->table->setItem(j,i,newItem);
            }
            else {
                table[i][j] = ui->table->item(j,i)->text().toStdString();
            }
        }
    }
    //проверка корректности таблицы <-------
    if(!tableCheck()) return;
    //если ок, то выполняем то, что ниже
    ii = 0;
    jj = 0;
    ni = 0;
    nj = 0;
    stopped = 0;
    cur = 0;
    cil = 0;
    paused = 0;
    isGoing = 1;
    need_one = 0;

    ui->table->setEnabled(0);
    ui->step->setEnabled(0);
    ui->pause->setEnabled(1);
    ui->go->setEnabled(0);
    ui->stop->setEnabled(1);
    ui->pushButton_3->setEnabled(0);
    ui->pushButton_4->setEnabled(0);
    ui->str->setEnabled(0);
    ui->pushButton_9->setEnabled(1);
    ui->pushButton_10->setEnabled(1);

    for(auto i : ui->table->selectedItems()) {

        i->setSelected(0);
    }
    step();
}


void MainWindow::on_pause_clicked()
{
    paused = !paused;
    if(paused) {
       ui->step->setEnabled(1);
    }
    else {
        ui->step->setEnabled(0);
    }
}


void MainWindow::on_step_clicked()
{
    if(!need_one && (last_animation == NULL || last_animation->currentTime() > lat - 1)) {
        if(paused) {
            need_one = 1;
            ui->stop->setEnabled(1);

        }
        else if(!isGoing) {

            table.resize(alp.size());
            for(int i = 0; i < ui->table->columnCount(); ++i) {
                table[i].resize(ui->table->rowCount());
            }
            for(int i = 0; i < ui->table->columnCount(); ++i) {
                for(int j = 0; j < ui->table->rowCount(); ++j) {
                    if(ui->table->item(j,i) == NULL) {
                        table[i][j] = "";
                        QTableWidgetItem *newItem = new QTableWidgetItem(tr("").arg(pow(j, i+1)));
                        ui->table->setItem(j,i,newItem);
                    }
                    else {
                        table[i][j] = ui->table->item(j,i)->text().toStdString();
                    }
                }
            }
            //проверка корректности таблицы <-------
            //если ок, то выполняем то, что ниже
            if(!tableCheck()) return;
            ui->stop->setEnabled(1);
            need_one = 1;
        }
        step();
    }
}


void MainWindow::on_stop_clicked()
{
    ui->table->setEnabled(1);
    ui->step->setEnabled(1);
    ui->pause->setEnabled(0);
    ui->go->setEnabled(1);
    ui->stop->setEnabled(0);
    ui->pushButton_3->setEnabled(1);
    ui->pushButton_4->setEnabled(1);
    ui->pushButton_10->setEnabled(1);
    ui->pushButton_9->setEnabled(1);
    ui->str->setEnabled(1);
    isGoing = 0;
    need_one = 0;
    paused = 0;
    stopped = 1;
    str = ui->str->text();
    st = 0;
    cur = 0;
    cil = 0;
    ui->table->item(nj,ni)->setBackground(QColor(255, 255, 255, 255));
    lent_fill();
    step();
}
void MainWindow::on_pushButton_11_clicked()
{
    speed_ += 0.25;
    if(speed_ > 2) speed_ = 2;
    ui->speed->setText(QString::fromStdString(to_string(speed_)));
}


void MainWindow::on_pushButton_12_clicked()
{
    speed_ -= 0.25;
    if(speed_ < 0.25) speed_ = 0.25;
    ui->speed->setText(QString::fromStdString(to_string(speed_)));
}

void MainWindow::on_pushButton_clicked()
{
    if(!isGoing) {
        st--;
        ui->it->move(ui->it->pos().x()-81,0);
        cil--;
        lent_fill();
    }
}


void MainWindow::on_pushButton_2_clicked()
{
    if(!isGoing) {
        st++;
        cil++;
        ui->it->move(ui->it->pos().x()+81,0);
        lent_fill();
    }
}

