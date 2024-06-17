/********************************************************************************
** Form generated from reading UI file 'groupdeleteform.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GROUPDELETEFORM_H
#define UI_GROUPDELETEFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_GroupDeleteForm
{
public:
    QComboBox *group_select;
    QPushButton *delete_button;
    QCheckBox *agree_box;
    QLabel *label;

    void setupUi(QDialog *GroupDeleteForm)
    {
        if (GroupDeleteForm->objectName().isEmpty())
            GroupDeleteForm->setObjectName("GroupDeleteForm");
        GroupDeleteForm->resize(400, 300);
        GroupDeleteForm->setStyleSheet(QString::fromUtf8("QDialog{\n"
"border-radius: 6px;\n"
"background-color: rgb(255, 255, 255);\n"
"}"));
        group_select = new QComboBox(GroupDeleteForm);
        group_select->setObjectName("group_select");
        group_select->setGeometry(QRect(30, 50, 331, 24));
        group_select->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"font: 13pt \"SF Pro\";\n"
"color: grey;\n"
"border-radius: 5px;\n"
"border-width: 1px;\n"
"border-style: solid;\n"
"background-color: white;\n"
"border-color: green;\n"
"}\n"
""));
        delete_button = new QPushButton(GroupDeleteForm);
        delete_button->setObjectName("delete_button");
        delete_button->setGeometry(QRect(30, 210, 331, 31));
        delete_button->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"     border-radius: 10px;\n"
"     background-color: rgb(37, 94, 0);\n"
"	font: 600 15pt \"SF Pro\";\n"
"    font-color: white;\n"
"}"));
        agree_box = new QCheckBox(GroupDeleteForm);
        agree_box->setObjectName("agree_box");
        agree_box->setGeometry(QRect(30, 170, 331, 31));
        agree_box->setStyleSheet(QString::fromUtf8("color: black;\n"
"checkbox-color: black;"));
        label = new QLabel(GroupDeleteForm);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 70, 481, 111));
        label->setStyleSheet(QString::fromUtf8("color: black;"));

        retranslateUi(GroupDeleteForm);

        QMetaObject::connectSlotsByName(GroupDeleteForm);
    } // setupUi

    void retranslateUi(QDialog *GroupDeleteForm)
    {
        GroupDeleteForm->setWindowTitle(QCoreApplication::translate("GroupDeleteForm", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \320\263\321\200\321\203\320\277\320\277\321\203", nullptr));
        delete_button->setText(QCoreApplication::translate("GroupDeleteForm", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        agree_box->setText(QCoreApplication::translate("GroupDeleteForm", "\320\237\320\276\320\264\321\202\320\262\320\265\321\200\320\264\320\270\321\202\320\265 \321\207\321\202\320\276 \320\276\320\267\320\275\320\260\320\272\320\276\320\274\320\270\320\273\320\270\321\201\321\214 \321\201 \320\277\320\276\321\201\320\273\320\265\320\264\321\201\321\202\320\262\320\270\321\217\320\274\320\270", nullptr));
        label->setText(QCoreApplication::translate("GroupDeleteForm", "\320\222\320\275\320\270\320\274\320\260\320\275\320\270\320\265! \320\222\321\213 \320\277\321\213\321\202\320\260\320\265\321\202\320\265\321\201\321\214 \320\261\320\265\320\267\320\262\320\276\320\267\320\262\321\200\320\260\321\202\320\275\320\276 \321\203\320\264\320\260\320\273\320\270\321\202\321\214 \320\263\321\200\321\203\320\277\320\277\321\213,\n"
"      \320\262\320\274\320\265\321\201\321\202\320\265 \321\201 \320\275\320\270\320\274 \320\261\321\203\320\264\321\203\321\202  \320\261\320\265\320\267\320\262\320\276\320\267\320\262\321\200\320\260\321\202\320\275\320\276 \321\203\320\264\320\260\320\273\320\265\320\275\321\213\n"
"   \320\264\320\260\320\275\320\275\321\213\320\265 \320\276 \320\262\321\201\320\265\321\205 \320\265\320\263\320\276 \321\201\321\202\321\203\320\264\320\265\320\275\321\202\320\260\321\205 \320\277\320\276 \320\262\321\201\320\265\320\274 \320\277\321\200\320\265\320\264\320\274\320\265\321\202\320\260\320\274!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GroupDeleteForm: public Ui_GroupDeleteForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GROUPDELETEFORM_H
