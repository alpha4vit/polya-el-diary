/********************************************************************************
** Form generated from reading UI file 'studentcreateform.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENTCREATEFORM_H
#define UI_STUDENTCREATEFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_StudentCreateForm
{
public:
    QLineEdit *student_name_input;
    QLineEdit *student_surname_input;
    QLineEdit *student_lastname_input;
    QPushButton *create_button;

    void setupUi(QDialog *StudentCreateForm)
    {
        if (StudentCreateForm->objectName().isEmpty())
            StudentCreateForm->setObjectName("StudentCreateForm");
        StudentCreateForm->resize(547, 332);
        student_name_input = new QLineEdit(StudentCreateForm);
        student_name_input->setObjectName("student_name_input");
        student_name_input->setGeometry(QRect(80, 50, 381, 28));
        student_surname_input = new QLineEdit(StudentCreateForm);
        student_surname_input->setObjectName("student_surname_input");
        student_surname_input->setGeometry(QRect(80, 110, 381, 28));
        student_lastname_input = new QLineEdit(StudentCreateForm);
        student_lastname_input->setObjectName("student_lastname_input");
        student_lastname_input->setGeometry(QRect(80, 170, 381, 28));
        create_button = new QPushButton(StudentCreateForm);
        create_button->setObjectName("create_button");
        create_button->setGeometry(QRect(180, 240, 171, 41));

        retranslateUi(StudentCreateForm);

        QMetaObject::connectSlotsByName(StudentCreateForm);
    } // setupUi

    void retranslateUi(QDialog *StudentCreateForm)
    {
        StudentCreateForm->setWindowTitle(QCoreApplication::translate("StudentCreateForm", "Dialog", nullptr));
        student_name_input->setPlaceholderText(QCoreApplication::translate("StudentCreateForm", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\270\320\274\321\217 \321\201\321\202\321\203\320\264\320\265\320\275\321\202\320\260", nullptr));
        student_surname_input->setPlaceholderText(QCoreApplication::translate("StudentCreateForm", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \321\204\320\260\320\274\320\270\320\273\320\270\321\216 \321\201\321\202\321\203\320\264\320\265\320\275\321\202\320\260", nullptr));
        student_lastname_input->setPlaceholderText(QCoreApplication::translate("StudentCreateForm", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\276\321\202\321\207\320\265\321\201\321\202\320\262\320\276 \321\201\321\202\321\203\320\264\320\265\320\275\321\202\320\260", nullptr));
        create_button->setText(QCoreApplication::translate("StudentCreateForm", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StudentCreateForm: public Ui_StudentCreateForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENTCREATEFORM_H
