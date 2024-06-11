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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AboutPage
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_2;
    QLabel *label_5;
    QLabel *label_4;
    QLabel *label_3;
    QLabel *label;
    QLabel *label_6;

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
        gridLayout = new QGridLayout(AboutPage);
        gridLayout->setObjectName("gridLayout");
        horizontalSpacer_2 = new QSpacerItem(194, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 2, 1, 1);

        label_2 = new QLabel(AboutPage);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("\n"
"font: 700 30pt \"SF Pro\";"));

        gridLayout->addWidget(label_2, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(198, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 0, 1, 1);

        scrollArea = new QScrollArea(AboutPage);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setStyleSheet(QString::fromUtf8("QScrollArea{\n"
"background-color: black;\n"
"}"));
        scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 971, 621));
        gridLayout_2 = new QGridLayout(scrollAreaWidgetContents);
        gridLayout_2->setObjectName("gridLayout_2");
        label_5 = new QLabel(scrollAreaWidgetContents);
        label_5->setObjectName("label_5");
        label_5->setStyleSheet(QString::fromUtf8("font: 500 13pt \"SF Pro\";"));

        gridLayout_2->addWidget(label_5, 6, 0, 1, 2);

        label_4 = new QLabel(scrollAreaWidgetContents);
        label_4->setObjectName("label_4");
        label_4->setStyleSheet(QString::fromUtf8("font: 700 18pt \"SF Pro\";"));

        gridLayout_2->addWidget(label_4, 5, 0, 1, 1);

        label_3 = new QLabel(scrollAreaWidgetContents);
        label_3->setObjectName("label_3");
        label_3->setStyleSheet(QString::fromUtf8("font: 500 13pt \"SF Pro\";"));

        gridLayout_2->addWidget(label_3, 4, 0, 1, 1);

        label = new QLabel(scrollAreaWidgetContents);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("font: 15pt \"SF Pro\";"));

        gridLayout_2->addWidget(label, 3, 0, 1, 1);

        label_6 = new QLabel(scrollAreaWidgetContents);
        label_6->setObjectName("label_6");
        label_6->setMaximumSize(QSize(600, 400));
        label_6->setPixmap(QPixmap(QString::fromUtf8(":/res/login.png")));
        label_6->setScaledContents(true);

        gridLayout_2->addWidget(label_6, 7, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout->addWidget(scrollArea, 1, 0, 1, 3);


        retranslateUi(AboutPage);

        QMetaObject::connectSlotsByName(AboutPage);
    } // setupUi

    void retranslateUi(QDialog *AboutPage)
    {
        AboutPage->setWindowTitle(QCoreApplication::translate("AboutPage", "\320\236 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\265", nullptr));
        label_2->setText(QCoreApplication::translate("AboutPage", "\320\240\321\203\320\272\320\276\320\262\320\276\320\264\321\201\321\202\320\262\320\276 \320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\321\217", nullptr));
        label_5->setText(QCoreApplication::translate("AboutPage", "1. \320\222\320\276\320\271\321\202\320\270 \320\262 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\321\203, \320\262\320\262\320\265\321\201\321\202\320\270 \320\273\320\276\320\263\320\270\320\275 \320\270 \320\277\320\260\321\200\320\276\320\273\321\214. \320\225\321\201\320\273\320\270 \320\262\321\213 \320\275\320\265 \321\217\320\262\320\273\321\217\320\265\321\202\320\265\321\201\321\214 \320\277\321\200\320\265\320\277\320\276\320\264\320\260\320\262\320\260\321\202\320\265\320\273\320\265\320\274, \321\202\320\276 \320\275\320\260\320\266\320\260\321\202\321\214 \320\275\320\260 \320\272\320\275\320\276\320\277\320\272\321\203 \"\320\237\321\200\320\276\320\264\320\276\320\273\320\266\320\270\321\202\321\214\n"
"\320\261\320\265\320\267 \320\262\321\205\320\276\320\264\320\260\" \320\270 \320\277\321\200\320\276\321\201\320\274\320\276\321\202\321\200\320\265\321\202\321\214 \320\262\320\265\320\264\320\276\320\274\320\276\321\201\321\202\321\214 \321\201 \320\276\321\206\320\265\320"
                        "\275\320\272\320\260\320\274\320\270.", nullptr));
        label_4->setText(QCoreApplication::translate("AboutPage", "\320\230\320\275\321\201\321\202\321\200\321\203\320\272\321\206\320\270\321\217 \320\277\320\276 \320\270\321\201\320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\320\275\320\270\321\216", nullptr));
        label_3->setText(QCoreApplication::translate("AboutPage", "\320\237\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\260 \"\320\220\320\262\321\202\320\276\320\274\320\260\321\202\320\270\320\267\320\260\321\206\320\270\321\217 \320\277\321\200\320\276\321\206\320\265\321\201\321\201\320\260 \320\272\320\276\320\275\321\202\321\200\320\276\320\273\321\217 \320\276\320\261\321\203\321\207\320\265\320\275\320\270\321\217 \321\203\321\207\320\260\321\211\320\270\321\205\321\201\321\217\" \320\277\321\200\320\265\320\264\320\275\320\260\320\267\320\275\320\260\321\207\320\265\320\275\320\260 \320\264\320\273\321\217 \320\272\320\276\320\275\321\202\321\200\320\276\320\273\321\217 \320\277\321\200\320\276\321\206\320\265\321\201\321\201\320\260 \320\276\320\261\321\203\321\207\320\265\320\275\320\270\321\217 \n"
"\320\222 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\265 \320\277\321\200\320\265\320\277\320\276\320\264\320\260\320\262\320\260\321\202\320\265\320\273\321\214 \320\274\320\276\320\266\320\265\321\202 \320\267\320\260\320\277\320"
                        "\276\320\273\320\275\321\217\321\202\321\214 \321\202\320\260\320\261\320\273\320\270\321\206\321\203 \321\201 \320\276\321\206\320\265\320\275\320\272\320\260\320\274\320\270 \321\203\321\207\320\260\321\211\320\270\321\205\321\201\321\217, \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\260 \320\277\320\276\320\264\321\201\321\207\320\270\321\202\321\213\320\262\320\260\320\265\321\202 \321\201\321\200\320\265\320\264\320\275\320\270\320\271 \320\261\320\260\320\273\320\273 \320\277\320\276 \n"
"\320\272\320\260\320\266\320\264\320\276\320\274\321\203 \320\277\321\200\320\265\320\264\320\274\320\265\321\202\321\203, \320\260 \321\202\320\260\320\272\320\266\320\265 \320\272\320\276\321\215\321\204\321\204\320\270\321\206\320\265\320\275\321\202 \320\272\320\260\321\207\320\265\321\201\321\202\320\262\320\260. \320\242\320\260\320\272\320\266\320\265 \320\270\320\274\320\265\320\265\321\202\321\201\321\217 \320\262\320\276\320\267\320\274\320\276\320\266\320\275\320\276\321\201\321\202\321"
                        "\214 \320\270\321\201\320\272\320\260\321\202\321\214 \321\201\321\202\321\203\320\264\320\265\320\275\321\202\320\276\320\262 \320\277\320\276 \320\263\321\200\321\203\320\277\320\277\320\265 \320\270 \320\262\321\213\320\262\320\276\320\264\320\270\321\202\321\214\n"
"\320\275\320\265\321\203\321\201\320\277\320\265\320\262\320\260\321\216\321\211\320\270\321\205 \321\201\321\202\321\203\320\264\320\265\320\275\321\202\320\276\320\262 ", nullptr));
        label->setText(QCoreApplication::translate("AboutPage", "\320\240\320\260\320\267\321\200\320\260\320\261\320\276\321\202\321\207\320\270\320\272:    \320\234\320\260\321\201\320\273\320\265\320\275\320\275\320\270\320\272\320\276\320\262\320\260 \320\237. \320\241.", nullptr));
        label_6->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AboutPage: public Ui_AboutPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTPAGE_H
