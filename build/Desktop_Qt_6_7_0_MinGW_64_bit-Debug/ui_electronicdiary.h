/********************************************************************************
** Form generated from reading UI file 'electronicdiary.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ELECTRONICDIARY_H
#define UI_ELECTRONICDIARY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ElectronicDiary
{
public:
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ElectronicDiary)
    {
        if (ElectronicDiary->objectName().isEmpty())
            ElectronicDiary->setObjectName("ElectronicDiary");
        ElectronicDiary->resize(850, 600);
        ElectronicDiary->setMinimumSize(QSize(850, 600));
        ElectronicDiary->setMaximumSize(QSize(850, 600));
        centralwidget = new QWidget(ElectronicDiary);
        centralwidget->setObjectName("centralwidget");
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(330, 160, 175, 205));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName("lineEdit");

        verticalLayout->addWidget(lineEdit);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");

        verticalLayout->addWidget(label_2);

        lineEdit_2 = new QLineEdit(layoutWidget);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setEchoMode(QLineEdit::Password);

        verticalLayout->addWidget(lineEdit_2);

        pushButton_3 = new QPushButton(layoutWidget);
        pushButton_3->setObjectName("pushButton_3");

        verticalLayout->addWidget(pushButton_3);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName("pushButton");

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName("pushButton_2");

        verticalLayout->addWidget(pushButton_2);

        ElectronicDiary->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ElectronicDiary);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 850, 24));
        ElectronicDiary->setMenuBar(menubar);
        statusbar = new QStatusBar(ElectronicDiary);
        statusbar->setObjectName("statusbar");
        ElectronicDiary->setStatusBar(statusbar);

        retranslateUi(ElectronicDiary);

        QMetaObject::connectSlotsByName(ElectronicDiary);
    } // setupUi

    void retranslateUi(QMainWindow *ElectronicDiary)
    {
        ElectronicDiary->setWindowTitle(QCoreApplication::translate("ElectronicDiary", "\320\224\320\275\320\265\320\262\320\275\320\270\320\272 \320\276\321\202 \320\237\320\276\320\273\320\270\320\275\320\276\321\207\320\272\320\270", nullptr));
        label->setText(QCoreApplication::translate("ElectronicDiary", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\273\320\276\320\263\320\270\320\275", nullptr));
        label_2->setText(QCoreApplication::translate("ElectronicDiary", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\277\320\260\321\200\320\276\320\273\321\214", nullptr));
        pushButton_3->setText(QCoreApplication::translate("ElectronicDiary", "\320\222\320\276\320\271\321\202\320\270", nullptr));
        pushButton->setText(QCoreApplication::translate("ElectronicDiary", "\320\237\321\200\320\276\320\264\320\276\320\273\320\266\320\270\321\202\321\214 \320\261\320\265\320\267 \320\262\321\205\320\276\320\264\320\260", nullptr));
        pushButton_2->setText(QCoreApplication::translate("ElectronicDiary", "\320\236 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\265", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ElectronicDiary: public Ui_ElectronicDiary {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ELECTRONICDIARY_H
