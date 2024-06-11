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
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ElectronicDiary)
    {
        if (ElectronicDiary->objectName().isEmpty())
            ElectronicDiary->setObjectName("ElectronicDiary");
        ElectronicDiary->resize(850, 600);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ElectronicDiary->sizePolicy().hasHeightForWidth());
        ElectronicDiary->setSizePolicy(sizePolicy);
        ElectronicDiary->setMinimumSize(QSize(850, 600));
        ElectronicDiary->setMaximumSize(QSize(850, 600));
        ElectronicDiary->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(ElectronicDiary);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setStyleSheet(QString::fromUtf8(""));
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(290, 130, 281, 301));
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(1);
        sizePolicy1.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy1);
        widget->setStyleSheet(QString::fromUtf8("QWidget{\n"
"border-radius: 6px;\n"
"background-color: rgb(255, 255, 255);\n"
"}"));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 700 18pt \"SF Pro\";"));

        verticalLayout->addWidget(label_3);

        label = new QLabel(widget);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("color: black;\n"
"font: 600 16pt \"SF Pro\";"));

        verticalLayout->addWidget(label);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName("lineEdit");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy2);
        QFont font;
        font.setFamilies({QString::fromUtf8("SF Pro")});
        font.setPointSize(13);
        font.setBold(false);
        font.setItalic(false);
        lineEdit->setFont(font);
        lineEdit->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"font: 13pt \"SF Pro\";\n"
"color: black;\n"
"border-radius: 5px;\n"
"border-width: 1px;\n"
"border-style: solid;\n"
"border-color: green;\n"
"}\n"
""));

        verticalLayout->addWidget(lineEdit);

        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("font: 600 16pt \"SF Pro\";\n"
"color: black;"));

        verticalLayout->addWidget(label_2);

        lineEdit_2 = new QLineEdit(widget);
        lineEdit_2->setObjectName("lineEdit_2");
        sizePolicy2.setHeightForWidth(lineEdit_2->sizePolicy().hasHeightForWidth());
        lineEdit_2->setSizePolicy(sizePolicy2);
        lineEdit_2->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"font: 13pt \"SF Pro\";\n"
"color: black;\n"
"border-radius: 5px;\n"
"border-width: 1px;\n"
"border-style: solid;\n"
"border-color: green;\n"
"}\n"
""));
        lineEdit_2->setEchoMode(QLineEdit::Password);

        verticalLayout->addWidget(lineEdit_2);

        pushButton_3 = new QPushButton(widget);
        pushButton_3->setObjectName("pushButton_3");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy3);
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"     border-radius: 10px;\n"
"     background-color: rgb(37, 94, 0);\n"
"	font: 600 15pt \"SF Pro\";\n"
"    font-color: white;\n"
"}"));

        verticalLayout->addWidget(pushButton_3);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName("pushButton");
        sizePolicy3.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy3);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"     border-radius: 10px;\n"
"     background-color: rgb(37, 94, 0);\n"
"	font: 600 15pt \"SF Pro\";\n"
"}"));

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName("pushButton_2");
        sizePolicy3.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy3);
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"     border-radius: 10px;\n"
"     background-color: rgb(37, 94, 0);\n"
"	font: 600 15pt \"SF Pro\";\n"
"}"));

        verticalLayout->addWidget(pushButton_2);

        pushButton_4 = new QPushButton(widget);
        pushButton_4->setObjectName("pushButton_4");
        sizePolicy3.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy3);
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"     border-radius: 10px;\n"
"     background-color: rgb(37, 94, 0);\n"
"	font: 600 15pt \"SF Pro\";\n"
"}"));

        verticalLayout->addWidget(pushButton_4);

        ElectronicDiary->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ElectronicDiary);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 850, 21));
        ElectronicDiary->setMenuBar(menubar);
        statusbar = new QStatusBar(ElectronicDiary);
        statusbar->setObjectName("statusbar");
        ElectronicDiary->setStatusBar(statusbar);

        retranslateUi(ElectronicDiary);

        QMetaObject::connectSlotsByName(ElectronicDiary);
    } // setupUi

    void retranslateUi(QMainWindow *ElectronicDiary)
    {
        ElectronicDiary->setWindowTitle(QCoreApplication::translate("ElectronicDiary", "\320\220\320\262\321\202\320\276\320\274\320\260\321\202\320\270\320\267\320\260\321\206\320\270\321\217 \320\277\321\200\320\276\321\206\320\265\321\201\321\201\320\260 \320\272\320\276\320\275\321\202\321\200\320\276\320\273\321\217 \320\276\320\261\321\203\321\207\320\265\320\275\320\270\321\217 \321\203\321\207\320\260\321\211\320\270\321\205\321\201\321\217", nullptr));
        label_3->setText(QCoreApplication::translate("ElectronicDiary", "                   \320\222\321\205\320\276\320\264 \320\262 \321\201\320\270\321\201\321\202\320\265\320\274\321\203", nullptr));
        label->setText(QCoreApplication::translate("ElectronicDiary", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\273\320\276\320\263\320\270\320\275", nullptr));
        lineEdit->setText(QString());
        label_2->setText(QCoreApplication::translate("ElectronicDiary", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\277\320\260\321\200\320\276\320\273\321\214", nullptr));
        pushButton_3->setText(QCoreApplication::translate("ElectronicDiary", "\320\222\320\276\320\271\321\202\320\270", nullptr));
        pushButton->setText(QCoreApplication::translate("ElectronicDiary", "\320\237\321\200\320\276\320\264\320\276\320\273\320\266\320\270\321\202\321\214 \320\261\320\265\320\267 \320\262\321\205\320\276\320\264\320\260", nullptr));
        pushButton_2->setText(QCoreApplication::translate("ElectronicDiary", "\320\236 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\265", nullptr));
        pushButton_4->setText(QCoreApplication::translate("ElectronicDiary", "\320\222\321\213\320\271\321\202\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ElectronicDiary: public Ui_ElectronicDiary {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ELECTRONICDIARY_H
