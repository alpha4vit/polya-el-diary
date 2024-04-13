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
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QPushButton *grade_create_button;
    QScrollArea *group_menu;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout;
    QTableView *tableView;
    QScrollArea *subject_menu;
    QWidget *scrollAreaWidgetContents_2;
    QHBoxLayout *horizontalLayout;

    void setupUi(QDialog *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(850, 600);
        MainWindow->setMinimumSize(QSize(850, 600));
        MainWindow->setMaximumSize(QSize(850, 600));
        grade_create_button = new QPushButton(MainWindow);
        grade_create_button->setObjectName("grade_create_button");
        grade_create_button->setGeometry(QRect(700, 60, 131, 41));
        group_menu = new QScrollArea(MainWindow);
        group_menu->setObjectName("group_menu");
        group_menu->setGeometry(QRect(0, 173, 141, 431));
        group_menu->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 139, 429));
        verticalLayout = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout->setObjectName("verticalLayout");
        group_menu->setWidget(scrollAreaWidgetContents);
        tableView = new QTableView(MainWindow);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(150, 170, 681, 421));
        subject_menu = new QScrollArea(MainWindow);
        subject_menu->setObjectName("subject_menu");
        subject_menu->setGeometry(QRect(150, 113, 681, 51));
        subject_menu->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName("scrollAreaWidgetContents_2");
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 679, 49));
        horizontalLayout = new QHBoxLayout(scrollAreaWidgetContents_2);
        horizontalLayout->setObjectName("horizontalLayout");
        subject_menu->setWidget(scrollAreaWidgetContents_2);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QDialog *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Dialog", nullptr));
        grade_create_button->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\276\321\206\320\265\320\275\320\272\321\203", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
