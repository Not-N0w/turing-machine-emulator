/********************************************************************************
** Form generated from reading UI file 'alp.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALP_H
#define UI_ALP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_alp
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *alp_;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *ealp;
    QPushButton *pushButton;

    void setupUi(QDialog *alp)
    {
        if (alp->objectName().isEmpty())
            alp->setObjectName("alp");
        alp->resize(489, 323);
        widget = new QWidget(alp);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(40, 50, 391, 211));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(widget);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        alp_ = new QLineEdit(widget);
        alp_->setObjectName("alp_");

        horizontalLayout->addWidget(alp_);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        ealp = new QLineEdit(widget);
        ealp->setObjectName("ealp");

        horizontalLayout_2->addWidget(ealp);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_2->addLayout(verticalLayout);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName("pushButton");

        verticalLayout_2->addWidget(pushButton);


        retranslateUi(alp);

        QMetaObject::connectSlotsByName(alp);
    } // setupUi

    void retranslateUi(QDialog *alp)
    {
        alp->setWindowTitle(QCoreApplication::translate("alp", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("alp", "\320\220\320\273\321\204\320\260\320\262\320\270\321\202 \320\273\320\265\320\275\321\202\321\213", nullptr));
        label_2->setText(QCoreApplication::translate("alp", "\320\220\320\273\321\204\320\260\320\262\320\270\321\202 \320\264\320\276\320\277 \321\201\320\270\320\274\320\262\320\276\320\273\320\276\320\262", nullptr));
        pushButton->setText(QCoreApplication::translate("alp", "\320\237\321\200\320\270\320\274\320\265\320\275\320\270\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class alp: public Ui_alp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALP_H
