/********************************************************************************
** Form generated from reading UI file 'gradecreateform.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRADECREATEFORM_H
#define UI_GRADECREATEFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GradeCreateForm
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QComboBox *student_selector;
    QLabel *label_2;
    QLineEdit *grade_value_edit;
    QLabel *label;
    QDateEdit *date_picker;
    QPushButton *create_button;

    void setupUi(QDialog *GradeCreateForm)
    {
        if (GradeCreateForm->objectName().isEmpty())
            GradeCreateForm->setObjectName("GradeCreateForm");
        GradeCreateForm->resize(399, 301);
        widget = new QWidget(GradeCreateForm);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(0, 0, 401, 301));
        widget->setStyleSheet(QString::fromUtf8("QWidget{\n"
"border-radius: 6px;\n"
"background-color: rgb(255, 255, 255);\n"
"}"));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");
        label_3->setStyleSheet(QString::fromUtf8("font: 500 13pt \"SF Pro\";\n"
"color: black;"));

        verticalLayout->addWidget(label_3);

        student_selector = new QComboBox(widget);
        student_selector->setObjectName("student_selector");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(student_selector->sizePolicy().hasHeightForWidth());
        student_selector->setSizePolicy(sizePolicy);
        student_selector->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"font: 13pt \"SF Pro\";\n"
"color: black;\n"
"border-radius: 5px;\n"
"border-width: 1px;\n"
"border-style: solid;\n"
"border-color: green;\n"
"}\n"
""));

        verticalLayout->addWidget(student_selector);

        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("font: 500 13pt \"SF Pro\";\n"
"color: black;\n"
""));

        verticalLayout->addWidget(label_2);

        grade_value_edit = new QLineEdit(widget);
        grade_value_edit->setObjectName("grade_value_edit");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(grade_value_edit->sizePolicy().hasHeightForWidth());
        grade_value_edit->setSizePolicy(sizePolicy1);
        grade_value_edit->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"font: 13pt \"SF Pro\";\n"
"color: black;\n"
"border-radius: 5px;\n"
"border-width: 1px;\n"
"border-style: solid;\n"
"border-color: green;\n"
"}\n"
""));

        verticalLayout->addWidget(grade_value_edit);

        label = new QLabel(widget);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("font: 500 13pt \"SF Pro\";\n"
"color: black;"));

        verticalLayout->addWidget(label);

        date_picker = new QDateEdit(widget);
        date_picker->setObjectName("date_picker");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(date_picker->sizePolicy().hasHeightForWidth());
        date_picker->setSizePolicy(sizePolicy2);
        date_picker->setStyleSheet(QString::fromUtf8("QDateEdit {\n"
"font: 13pt \"SF Pro\";\n"
"color: black;\n"
"border-radius: 5px;\n"
"border-width: 1px;\n"
"border-style: solid;\n"
"border-color: green;\n"
"}\n"
""));

        verticalLayout->addWidget(date_picker);

        create_button = new QPushButton(widget);
        create_button->setObjectName("create_button");
        sizePolicy2.setHeightForWidth(create_button->sizePolicy().hasHeightForWidth());
        create_button->setSizePolicy(sizePolicy2);
        create_button->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"     border-radius: 10px;\n"
"     background-color: rgb(37, 94, 0);\n"
"	font: 600 15pt \"SF Pro\";\n"
"    font-color: white;\n"
"}"));

        verticalLayout->addWidget(create_button);


        retranslateUi(GradeCreateForm);

        QMetaObject::connectSlotsByName(GradeCreateForm);
    } // setupUi

    void retranslateUi(QDialog *GradeCreateForm)
    {
        GradeCreateForm->setWindowTitle(QCoreApplication::translate("GradeCreateForm", "\320\224\320\276\320\261\320\260\320\262\320\273\320\265\320\275\320\270\320\265 \320\276\321\206\320\265\320\275\320\272\320\270", nullptr));
        label_3->setText(QCoreApplication::translate("GradeCreateForm", "\320\241\321\202\321\203\320\264\320\265\320\275\321\202:", nullptr));
        label_2->setText(QCoreApplication::translate("GradeCreateForm", "\320\236\321\206\320\265\320\275\320\272\320\260:", nullptr));
        label->setText(QCoreApplication::translate("GradeCreateForm", "\320\222\321\213\320\261\320\265\321\200\320\270\321\202\320\265 \320\264\320\260\321\202\321\203:", nullptr));
        create_button->setText(QCoreApplication::translate("GradeCreateForm", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GradeCreateForm: public Ui_GradeCreateForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRADECREATEFORM_H
