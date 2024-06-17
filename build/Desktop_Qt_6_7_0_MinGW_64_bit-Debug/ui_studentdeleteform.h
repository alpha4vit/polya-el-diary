/********************************************************************************
** Form generated from reading UI file 'studentdeleteform.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENTDELETEFORM_H
#define UI_STUDENTDELETEFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_StudentDeleteForm
{
public:
    QComboBox *student_select;
    QCheckBox *agree_box;
    QPushButton *delete_button;
    QLabel *label;

    void setupUi(QDialog *StudentDeleteForm)
    {
        if (StudentDeleteForm->objectName().isEmpty())
            StudentDeleteForm->setObjectName("StudentDeleteForm");
        StudentDeleteForm->resize(400, 300);
        StudentDeleteForm->setStyleSheet(QString::fromUtf8("QDialog{\n"
"border-radius: 6px;\n"
"background-color: rgb(255, 255, 255);\n"
"}"));
        student_select = new QComboBox(StudentDeleteForm);
        student_select->setObjectName("student_select");
        student_select->setGeometry(QRect(40, 60, 321, 24));
        student_select->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"font: 13pt \"SF Pro\";\n"
"color: grey;\n"
"border-radius: 5px;\n"
"border-width: 1px;\n"
"border-style: solid;\n"
"background-color: white;\n"
"border-color: green;\n"
"}\n"
""));
        agree_box = new QCheckBox(StudentDeleteForm);
        agree_box->setObjectName("agree_box");
        agree_box->setGeometry(QRect(50, 180, 331, 31));
        agree_box->setStyleSheet(QString::fromUtf8("color: black;"));
        delete_button = new QPushButton(StudentDeleteForm);
        delete_button->setObjectName("delete_button");
        delete_button->setGeometry(QRect(40, 220, 321, 24));
        delete_button->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"     border-radius: 10px;\n"
"     background-color: rgb(37, 94, 0);\n"
"	font: 600 15pt \"SF Pro\";\n"
"    font-color: white;\n"
"}"));
        label = new QLabel(StudentDeleteForm);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 70, 481, 111));
        label->setStyleSheet(QString::fromUtf8("color: black;"));

        retranslateUi(StudentDeleteForm);

        QMetaObject::connectSlotsByName(StudentDeleteForm);
    } // setupUi

    void retranslateUi(QDialog *StudentDeleteForm)
    {
        StudentDeleteForm->setWindowTitle(QCoreApplication::translate("StudentDeleteForm", "\320\243\320\264\320\260\320\273\320\265\320\275\320\270\320\265 \321\201\321\202\321\203\320\264\320\265\320\275\321\202\320\260", nullptr));
        agree_box->setText(QCoreApplication::translate("StudentDeleteForm", "\320\237\320\276\320\264\321\202\320\262\320\265\321\200\320\264\320\270\321\202\320\265 \321\207\321\202\320\276 \320\276\320\267\320\275\320\260\320\272\320\276\320\274\320\270\320\273\320\270\321\201\321\214 \321\201 \320\277\320\276\321\201\320\273\320\265\320\264\321\201\321\202\320\262\320\270\321\217\320\274\320\270", nullptr));
        delete_button->setText(QCoreApplication::translate("StudentDeleteForm", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        label->setText(QCoreApplication::translate("StudentDeleteForm", "\320\222\320\275\320\270\320\274\320\260\320\275\320\270\320\265! \320\222\321\213 \320\277\321\213\321\202\320\260\320\265\321\202\320\265\321\201\321\214 \320\261\320\265\320\267\320\262\320\276\320\267\320\262\321\200\320\260\321\202\320\275\320\276 \321\203\320\264\320\260\320\273\320\270\321\202\321\214 \321\201\321\202\321\203\320\264\320\265\320\275\321\202\320\260,\n"
"              \320\262\320\274\320\265\321\201\321\202\320\265 \321\201 \320\275\320\270\320\274 \320\261\321\203\320\264\321\203\321\202  \320\261\320\265\320\267\320\262\320\276\320\267\320\262\321\200\320\260\321\202\320\275\320\276 \321\203\320\264\320\260\320\273\320\265\320\275\321\213\n"
"        \320\264\320\260\320\275\320\275\321\213\320\265 \320\276 \320\262\321\201\320\265\321\205 \320\265\320\263\320\276 \320\276\321\206\320\265\320\275\320\272\320\260\321\205 \320\277\320\276 \320\262\321\201\320\265\320\274 \320\277\321\200\320\265\320\264\320\274\320\265\321\202\320\260\320\274!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StudentDeleteForm: public Ui_StudentDeleteForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENTDELETEFORM_H
