/********************************************************************************
** Form generated from reading UI file 'groupcreateform.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GROUPCREATEFORM_H
#define UI_GROUPCREATEFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <multiselectcombobox.h>

QT_BEGIN_NAMESPACE

class Ui_GroupCreateForm
{
public:
    MultiSelectComboBox *multiselect;
    QLineEdit *groupNameInput;
    QPushButton *createButton;

    void setupUi(QDialog *GroupCreateForm)
    {
        if (GroupCreateForm->objectName().isEmpty())
            GroupCreateForm->setObjectName("GroupCreateForm");
        GroupCreateForm->resize(392, 264);
        multiselect = new MultiSelectComboBox(GroupCreateForm);
        multiselect->setObjectName("multiselect");
        multiselect->setGeometry(QRect(40, 130, 321, 24));
        groupNameInput = new QLineEdit(GroupCreateForm);
        groupNameInput->setObjectName("groupNameInput");
        groupNameInput->setGeometry(QRect(40, 80, 321, 24));
        createButton = new QPushButton(GroupCreateForm);
        createButton->setObjectName("createButton");
        createButton->setGeometry(QRect(150, 180, 80, 24));

        retranslateUi(GroupCreateForm);

        QMetaObject::connectSlotsByName(GroupCreateForm);
    } // setupUi

    void retranslateUi(QDialog *GroupCreateForm)
    {
        GroupCreateForm->setWindowTitle(QCoreApplication::translate("GroupCreateForm", "Dialog", nullptr));
        multiselect->setPlaceholderText(QCoreApplication::translate("GroupCreateForm", "\320\222\321\213\320\261\320\265\321\200\320\270\321\202\320\265 \320\277\321\200\320\265\320\264\320\274\320\265\321\202\321\213", nullptr));
        groupNameInput->setPlaceholderText(QCoreApplication::translate("GroupCreateForm", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\275\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \320\263\321\200\321\203\320\277\320\277\321\213", nullptr));
        createButton->setText(QCoreApplication::translate("GroupCreateForm", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GroupCreateForm: public Ui_GroupCreateForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GROUPCREATEFORM_H
