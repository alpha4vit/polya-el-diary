/********************************************************************************
** Form generated from reading UI file 'aboutpage.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTPAGE_H
#define UI_ABOUTPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_AboutPage
{
public:

    void setupUi(QDialog *AboutPage)
    {
        if (AboutPage->objectName().isEmpty())
            AboutPage->setObjectName("AboutPage");
        AboutPage->resize(850, 600);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(AboutPage->sizePolicy().hasHeightForWidth());
        AboutPage->setSizePolicy(sizePolicy);
        AboutPage->setMinimumSize(QSize(850, 600));
        AboutPage->setMaximumSize(QSize(850, 600));

        retranslateUi(AboutPage);

        QMetaObject::connectSlotsByName(AboutPage);
    } // setupUi

    void retranslateUi(QDialog *AboutPage)
    {
        AboutPage->setWindowTitle(QCoreApplication::translate("AboutPage", "\320\236 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\265", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AboutPage: public Ui_AboutPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTPAGE_H
