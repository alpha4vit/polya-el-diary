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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_StudentDeleteForm
{
public:
    QComboBox *student_select;
    QTextEdit *textEdit;
    QPushButton *delete_button;
    QCheckBox *agree_box;

    void setupUi(QDialog *StudentDeleteForm)
    {
        if (StudentDeleteForm->objectName().isEmpty())
            StudentDeleteForm->setObjectName("StudentDeleteForm");
        StudentDeleteForm->resize(400, 300);
        student_select = new QComboBox(StudentDeleteForm);
        student_select->setObjectName("student_select");
        student_select->setGeometry(QRect(40, 60, 321, 24));
        textEdit = new QTextEdit(StudentDeleteForm);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(50, 100, 291, 70));
        textEdit->setReadOnly(true);
        delete_button = new QPushButton(StudentDeleteForm);
        delete_button->setObjectName("delete_button");
        delete_button->setGeometry(QRect(160, 220, 80, 24));
        agree_box = new QCheckBox(StudentDeleteForm);
        agree_box->setObjectName("agree_box");
        agree_box->setGeometry(QRect(50, 180, 331, 31));

        retranslateUi(StudentDeleteForm);

        QMetaObject::connectSlotsByName(StudentDeleteForm);
    } // setupUi

    void retranslateUi(QDialog *StudentDeleteForm)
    {
        StudentDeleteForm->setWindowTitle(QCoreApplication::translate("StudentDeleteForm", "Dialog", nullptr));
        textEdit->setHtml(QCoreApplication::translate("StudentDeleteForm", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\222\320\275\320\270\320\274\320\260\320\275\320\270\320\265! \320\222\321\213 \320\277\321\213\321\202\320\260\320\265\321\202\320\265\321\201\321\214 \320\261\320\265\320\267\320\262\320\276\320\267\320\262\321\200\320\260\321\202\320\275\320\276 \321\203\320\264\320\260\320\273\320\270\321\202\321\214 \321\201\321\202\321\203\320\264\320\265\320\275\321\202\320\260, \320\262\320\274\320\265\321"
                        "\201\321\202\320\265 \321\201 \320\275\320\270\320\274 \320\261\321\203\320\264\321\203\321\202 \321\203\320\264\320\260\320\273\320\265\320\275\321\213 \320\264\320\260\320\275\320\275\321\213\320\265 \320\276 \320\262\321\201\320\265\321\205 \320\265\320\263\320\276 \320\276\321\206\320\265\320\275\320\272\320\260\321\205 \320\277\320\276 \320\262\321\201\320\265\320\274 \320\277\321\200\320\265\320\264\320\274\320\265\321\202\320\260\320\274!</p></body></html>", nullptr));
        delete_button->setText(QCoreApplication::translate("StudentDeleteForm", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214!", nullptr));
        agree_box->setText(QCoreApplication::translate("StudentDeleteForm", "\320\237\320\276\320\264\321\202\320\262\320\265\321\200\320\264\320\270\321\202\320\265 \321\207\321\202\320\276 \320\276\320\267\320\275\320\260\320\272\320\276\320\274\320\270\320\273\320\270\321\201\321\214 \321\201 \320\277\320\276\321\201\320\273\320\265\320\264\321\201\321\202\320\262\320\270\321\217\320\274\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StudentDeleteForm: public Ui_StudentDeleteForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENTDELETEFORM_H
