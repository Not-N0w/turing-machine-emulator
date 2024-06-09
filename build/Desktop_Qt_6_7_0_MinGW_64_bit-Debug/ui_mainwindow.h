/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QFrame *frame;
    QLabel *it;
    QTableWidget *table;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_6;
    QLineEdit *lineEdit_7;
    QLineEdit *lineEdit_8;
    QLineEdit *lineEdit_9;
    QLineEdit *lineEdit_10;
    QLineEdit *lineEdit_11;
    QLineEdit *lineEdit_12;
    QLineEdit *lineEdit_13;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QLineEdit *alp_box;
    QPushButton *pushButton_4;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *str;
    QPushButton *pushButton_3;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QLabel *speed;
    QVBoxLayout *verticalLayout_3;
    QPushButton *pushButton_11;
    QPushButton *pushButton_12;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *go;
    QPushButton *pause;
    QPushButton *step;
    QPushButton *stop;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1200, 800);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(14, 40, 51, 61));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(1140, 40, 51, 61));
        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(78, 115, 1050, 70));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        it = new QLabel(frame);
        it->setObjectName("it");
        it->setGeometry(QRect(2, 0, 70, 70));
        it->setMinimumSize(QSize(70, 70));
        it->setMaximumSize(QSize(70, 70));
        QFont font;
        font.setPointSize(18);
        it->setFont(font);
        it->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        table = new QTableWidget(centralwidget);
        if (table->columnCount() < 1)
            table->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        table->setHorizontalHeaderItem(0, __qtablewidgetitem);
        if (table->rowCount() < 1)
            table->setRowCount(1);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        table->setVerticalHeaderItem(0, __qtablewidgetitem1);
        table->setObjectName("table");
        table->setGeometry(QRect(80, 220, 521, 391));
        pushButton_9 = new QPushButton(centralwidget);
        pushButton_9->setObjectName("pushButton_9");
        pushButton_9->setGeometry(QRect(80, 630, 83, 29));
        pushButton_10 = new QPushButton(centralwidget);
        pushButton_10->setObjectName("pushButton_10");
        pushButton_10->setGeometry(QRect(170, 630, 83, 29));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(80, 30, 1051, 87));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(10);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName("lineEdit");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(70);
        sizePolicy.setVerticalStretch(70);
        sizePolicy.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy);
        lineEdit->setMinimumSize(QSize(70, 70));
        lineEdit->setMaximumSize(QSize(70, 70));
        QFont font1;
        font1.setPointSize(12);
        lineEdit->setFont(font1);
        lineEdit->setStyleSheet(QString::fromUtf8("QLineEdit:hover {\n"
"	border: 1px solid gray;\n"
"}\n"
"QLineEdit {\n"
"	border: 1px solid gray;\n"
"}"));
        lineEdit->setAlignment(Qt::AlignCenter);
        lineEdit->setReadOnly(true);

        horizontalLayout->addWidget(lineEdit);

        lineEdit_2 = new QLineEdit(layoutWidget);
        lineEdit_2->setObjectName("lineEdit_2");
        sizePolicy.setHeightForWidth(lineEdit_2->sizePolicy().hasHeightForWidth());
        lineEdit_2->setSizePolicy(sizePolicy);
        lineEdit_2->setMinimumSize(QSize(70, 70));
        lineEdit_2->setMaximumSize(QSize(70, 70));
        lineEdit_2->setFont(font1);
        lineEdit_2->setStyleSheet(QString::fromUtf8("QLineEdit:hover {\n"
"	border: 1px solid gray;\n"
"}\n"
"QLineEdit {\n"
"	border: 1px solid gray;\n"
"}"));
        lineEdit_2->setAlignment(Qt::AlignCenter);
        lineEdit_2->setReadOnly(true);

        horizontalLayout->addWidget(lineEdit_2);

        lineEdit_3 = new QLineEdit(layoutWidget);
        lineEdit_3->setObjectName("lineEdit_3");
        sizePolicy.setHeightForWidth(lineEdit_3->sizePolicy().hasHeightForWidth());
        lineEdit_3->setSizePolicy(sizePolicy);
        lineEdit_3->setMinimumSize(QSize(70, 70));
        lineEdit_3->setMaximumSize(QSize(70, 70));
        lineEdit_3->setFont(font1);
        lineEdit_3->setStyleSheet(QString::fromUtf8("QLineEdit:hover {\n"
"	border: 1px solid gray;\n"
"}\n"
"QLineEdit {\n"
"	border: 1px solid gray;\n"
"}"));
        lineEdit_3->setAlignment(Qt::AlignCenter);
        lineEdit_3->setReadOnly(true);

        horizontalLayout->addWidget(lineEdit_3);

        lineEdit_4 = new QLineEdit(layoutWidget);
        lineEdit_4->setObjectName("lineEdit_4");
        sizePolicy.setHeightForWidth(lineEdit_4->sizePolicy().hasHeightForWidth());
        lineEdit_4->setSizePolicy(sizePolicy);
        lineEdit_4->setMinimumSize(QSize(70, 70));
        lineEdit_4->setMaximumSize(QSize(70, 70));
        lineEdit_4->setFont(font1);
        lineEdit_4->setStyleSheet(QString::fromUtf8("QLineEdit:hover {\n"
"	border: 1px solid gray;\n"
"}\n"
"QLineEdit {\n"
"	border: 1px solid gray;\n"
"}"));
        lineEdit_4->setAlignment(Qt::AlignCenter);
        lineEdit_4->setReadOnly(true);

        horizontalLayout->addWidget(lineEdit_4);

        lineEdit_5 = new QLineEdit(layoutWidget);
        lineEdit_5->setObjectName("lineEdit_5");
        sizePolicy.setHeightForWidth(lineEdit_5->sizePolicy().hasHeightForWidth());
        lineEdit_5->setSizePolicy(sizePolicy);
        lineEdit_5->setMinimumSize(QSize(70, 70));
        lineEdit_5->setMaximumSize(QSize(70, 70));
        lineEdit_5->setFont(font1);
        lineEdit_5->setStyleSheet(QString::fromUtf8("QLineEdit:hover {\n"
"	border: 1px solid gray;\n"
"}\n"
"QLineEdit {\n"
"	border: 1px solid gray;\n"
"}"));
        lineEdit_5->setAlignment(Qt::AlignCenter);
        lineEdit_5->setReadOnly(true);

        horizontalLayout->addWidget(lineEdit_5);

        lineEdit_6 = new QLineEdit(layoutWidget);
        lineEdit_6->setObjectName("lineEdit_6");
        sizePolicy.setHeightForWidth(lineEdit_6->sizePolicy().hasHeightForWidth());
        lineEdit_6->setSizePolicy(sizePolicy);
        lineEdit_6->setMinimumSize(QSize(70, 70));
        lineEdit_6->setMaximumSize(QSize(70, 70));
        lineEdit_6->setFont(font1);
        lineEdit_6->setStyleSheet(QString::fromUtf8("QLineEdit:hover {\n"
"	border: 1px solid gray;\n"
"}\n"
"QLineEdit {\n"
"	border: 1px solid gray;\n"
"}"));
        lineEdit_6->setAlignment(Qt::AlignCenter);
        lineEdit_6->setReadOnly(true);

        horizontalLayout->addWidget(lineEdit_6);

        lineEdit_7 = new QLineEdit(layoutWidget);
        lineEdit_7->setObjectName("lineEdit_7");
        sizePolicy.setHeightForWidth(lineEdit_7->sizePolicy().hasHeightForWidth());
        lineEdit_7->setSizePolicy(sizePolicy);
        lineEdit_7->setMinimumSize(QSize(70, 70));
        lineEdit_7->setMaximumSize(QSize(70, 70));
        lineEdit_7->setFont(font1);
        lineEdit_7->setStyleSheet(QString::fromUtf8("QLineEdit:hover {\n"
"	border: 1px solid gray;\n"
"}\n"
"QLineEdit {\n"
"	border: 1px solid gray;\n"
"}"));
        lineEdit_7->setAlignment(Qt::AlignCenter);
        lineEdit_7->setReadOnly(true);

        horizontalLayout->addWidget(lineEdit_7);

        lineEdit_8 = new QLineEdit(layoutWidget);
        lineEdit_8->setObjectName("lineEdit_8");
        sizePolicy.setHeightForWidth(lineEdit_8->sizePolicy().hasHeightForWidth());
        lineEdit_8->setSizePolicy(sizePolicy);
        lineEdit_8->setMinimumSize(QSize(70, 70));
        lineEdit_8->setMaximumSize(QSize(70, 70));
        lineEdit_8->setFont(font1);
        lineEdit_8->setStyleSheet(QString::fromUtf8("QLineEdit:hover {\n"
"	border: 1px solid gray;\n"
"}\n"
"QLineEdit {\n"
"	border: 1px solid gray;\n"
"}"));
        lineEdit_8->setAlignment(Qt::AlignCenter);
        lineEdit_8->setReadOnly(true);

        horizontalLayout->addWidget(lineEdit_8);

        lineEdit_9 = new QLineEdit(layoutWidget);
        lineEdit_9->setObjectName("lineEdit_9");
        sizePolicy.setHeightForWidth(lineEdit_9->sizePolicy().hasHeightForWidth());
        lineEdit_9->setSizePolicy(sizePolicy);
        lineEdit_9->setMinimumSize(QSize(70, 70));
        lineEdit_9->setMaximumSize(QSize(70, 70));
        lineEdit_9->setFont(font1);
        lineEdit_9->setStyleSheet(QString::fromUtf8("QLineEdit:hover {\n"
"	border: 1px solid gray;\n"
"}\n"
"QLineEdit {\n"
"	border: 1px solid gray;\n"
"}"));
        lineEdit_9->setAlignment(Qt::AlignCenter);
        lineEdit_9->setReadOnly(true);

        horizontalLayout->addWidget(lineEdit_9);

        lineEdit_10 = new QLineEdit(layoutWidget);
        lineEdit_10->setObjectName("lineEdit_10");
        sizePolicy.setHeightForWidth(lineEdit_10->sizePolicy().hasHeightForWidth());
        lineEdit_10->setSizePolicy(sizePolicy);
        lineEdit_10->setMinimumSize(QSize(70, 70));
        lineEdit_10->setMaximumSize(QSize(70, 70));
        lineEdit_10->setFont(font1);
        lineEdit_10->setStyleSheet(QString::fromUtf8("QLineEdit:hover {\n"
"	border: 1px solid gray;\n"
"}\n"
"QLineEdit {\n"
"	border: 1px solid gray;\n"
"}"));
        lineEdit_10->setAlignment(Qt::AlignCenter);
        lineEdit_10->setReadOnly(true);

        horizontalLayout->addWidget(lineEdit_10);

        lineEdit_11 = new QLineEdit(layoutWidget);
        lineEdit_11->setObjectName("lineEdit_11");
        sizePolicy.setHeightForWidth(lineEdit_11->sizePolicy().hasHeightForWidth());
        lineEdit_11->setSizePolicy(sizePolicy);
        lineEdit_11->setMinimumSize(QSize(70, 70));
        lineEdit_11->setMaximumSize(QSize(70, 70));
        lineEdit_11->setFont(font1);
        lineEdit_11->setStyleSheet(QString::fromUtf8("QLineEdit:hover {\n"
"	border: 1px solid gray;\n"
"}\n"
"QLineEdit {\n"
"	border: 1px solid gray;\n"
"}"));
        lineEdit_11->setAlignment(Qt::AlignCenter);
        lineEdit_11->setReadOnly(true);

        horizontalLayout->addWidget(lineEdit_11);

        lineEdit_12 = new QLineEdit(layoutWidget);
        lineEdit_12->setObjectName("lineEdit_12");
        sizePolicy.setHeightForWidth(lineEdit_12->sizePolicy().hasHeightForWidth());
        lineEdit_12->setSizePolicy(sizePolicy);
        lineEdit_12->setMinimumSize(QSize(70, 70));
        lineEdit_12->setMaximumSize(QSize(70, 70));
        lineEdit_12->setFont(font1);
        lineEdit_12->setStyleSheet(QString::fromUtf8("QLineEdit:hover {\n"
"	border: 1px solid gray;\n"
"}\n"
"QLineEdit {\n"
"	border: 1px solid gray;\n"
"}"));
        lineEdit_12->setAlignment(Qt::AlignCenter);
        lineEdit_12->setReadOnly(true);

        horizontalLayout->addWidget(lineEdit_12);

        lineEdit_13 = new QLineEdit(layoutWidget);
        lineEdit_13->setObjectName("lineEdit_13");
        lineEdit_13->setMinimumSize(QSize(70, 70));
        lineEdit_13->setMaximumSize(QSize(70, 70));
        lineEdit_13->setFont(font1);
        lineEdit_13->setStyleSheet(QString::fromUtf8("QLineEdit:hover {\n"
"	border: 1px solid gray;\n"
"}\n"
"QLineEdit {\n"
"	border: 1px solid gray;\n"
"}"));
        lineEdit_13->setAlignment(Qt::AlignCenter);
        lineEdit_13->setReadOnly(true);

        horizontalLayout->addWidget(lineEdit_13);

        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(740, 240, 411, 371));
        verticalLayout_4 = new QVBoxLayout(layoutWidget1);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label = new QLabel(layoutWidget1);
        label->setObjectName("label");
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Roboto")});
        font2.setPointSize(11);
        label->setFont(font2);

        horizontalLayout_3->addWidget(label);

        alp_box = new QLineEdit(layoutWidget1);
        alp_box->setObjectName("alp_box");
        alp_box->setStyleSheet(QString::fromUtf8("QLineEdit:hover {\n"
"	border: 1px solid gray;\n"
"}\n"
"QLineEdit {\n"
"	border: 1px solid gray;\n"
"}"));
        alp_box->setReadOnly(true);

        horizontalLayout_3->addWidget(alp_box);

        pushButton_4 = new QPushButton(layoutWidget1);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setFont(font2);

        horizontalLayout_3->addWidget(pushButton_4);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName("label_2");
        label_2->setFont(font2);

        horizontalLayout_2->addWidget(label_2);

        str = new QLineEdit(layoutWidget1);
        str->setObjectName("str");
        str->setStyleSheet(QString::fromUtf8("QLineEdit:hover {\n"
"	border: 1px solid green;\n"
"}\n"
"QLineEdit {\n"
"	border: 1px solid gray;\n"
"}"));

        horizontalLayout_2->addWidget(str);

        pushButton_3 = new QPushButton(layoutWidget1);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setFont(font2);

        horizontalLayout_2->addWidget(pushButton_3);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_4->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName("label_3");
        label_3->setFont(font2);

        horizontalLayout_4->addWidget(label_3);

        speed = new QLabel(layoutWidget1);
        speed->setObjectName("speed");
        speed->setMinimumSize(QSize(240, 0));
        speed->setFont(font2);
        speed->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(speed);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        pushButton_11 = new QPushButton(layoutWidget1);
        pushButton_11->setObjectName("pushButton_11");
        pushButton_11->setMaximumSize(QSize(50, 16777215));

        verticalLayout_3->addWidget(pushButton_11);

        pushButton_12 = new QPushButton(layoutWidget1);
        pushButton_12->setObjectName("pushButton_12");
        pushButton_12->setMaximumSize(QSize(50, 16777215));

        verticalLayout_3->addWidget(pushButton_12);


        horizontalLayout_4->addLayout(verticalLayout_3);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        go = new QPushButton(layoutWidget1);
        go->setObjectName("go");
        go->setMinimumSize(QSize(40, 50));

        horizontalLayout_5->addWidget(go);

        pause = new QPushButton(layoutWidget1);
        pause->setObjectName("pause");
        pause->setEnabled(false);
        pause->setMinimumSize(QSize(40, 50));

        horizontalLayout_5->addWidget(pause);

        step = new QPushButton(layoutWidget1);
        step->setObjectName("step");
        step->setEnabled(true);
        step->setMinimumSize(QSize(40, 50));

        horizontalLayout_5->addWidget(step);

        stop = new QPushButton(layoutWidget1);
        stop->setObjectName("stop");
        stop->setEnabled(false);
        stop->setMinimumSize(QSize(40, 50));

        horizontalLayout_5->addWidget(stop);


        verticalLayout_2->addLayout(horizontalLayout_5);


        verticalLayout_4->addLayout(verticalLayout_2);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "<", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", ">", nullptr));
        it->setText(QCoreApplication::translate("MainWindow", "^", nullptr));
        QTableWidgetItem *___qtablewidgetitem = table->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "\316\273", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = table->verticalHeaderItem(0);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "q0", nullptr));
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        pushButton_10->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\220\320\273\321\204\320\260\320\262\320\270\321\202", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\241\321\202\321\200\320\276\320\272\320\260", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\320\241\320\272\320\276\321\200\320\276\321\201\321\202\321\214", nullptr));
        speed->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        pushButton_11->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        pushButton_12->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        go->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
        pause->setText(QCoreApplication::translate("MainWindow", "Pause", nullptr));
        step->setText(QCoreApplication::translate("MainWindow", "Step", nullptr));
        stop->setText(QCoreApplication::translate("MainWindow", "Stop", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
