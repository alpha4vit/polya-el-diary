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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_GradeCreateForm
{
public:
    QComboBox *student_selector;
    QLineEdit *grade_value_edit;
    QDateEdit *date_picker;
    QPushButton *create_button;

    void setupUi(QDialog *GradeCreateForm)
    {
        if (GradeCreateForm->objectName().isEmpty())
            GradeCreateForm->setObjectName("GradeCreateForm");
        GradeCreateForm->resize(444, 310);
        student_selector = new QComboBox(GradeCreateForm);
        student_selector->setObjectName("student_selector");
        student_selector->setGeometry(QRect(50, 50, 331, 31));
        grade_value_edit = new QLineEdit(GradeCreateForm);
        grade_value_edit->setObjectName("grade_value_edit");
        grade_value_edit->setGeometry(QRect(50, 100, 331, 28));
        date_picker = new QDateEdit(GradeCreateForm);
        date_picker->setObjectName("date_picker");
        date_picker->setGeometry(QRect(50, 150, 331, 29));
        create_button = new QPushButton(GradeCreateForm);
        create_button->setObjectName("create_button");
        create_button->setGeometry(QRect(170, 210, 83, 29));

        retranslateUi(GradeCreateForm);

        QMetaObject::connectSlotsByName(GradeCreateForm);
    } // setupUi

    void retranslateUi(QDialog *GradeCreateForm)
    {
        GradeCreateForm->setWindowTitle(QCoreApplication::translate("GradeCreateForm", "Dialog", nullptr));
        create_button->setText(QCoreApplication::translate("GradeCreateForm", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GradeCreateForm: public Ui_GradeCreateForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRADECREATEFORM_H
