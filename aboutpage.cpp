#include "aboutpage.h"
#include "ui_aboutpage.h"

AboutPage::AboutPage(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AboutPage)
{
    ui->setupUi(this);
    QPixmap back(":/res/back_4.JPG");
    back.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette pal;
    pal.setBrush(QPalette::Window, back);
    this->setPalette(pal);
}

AboutPage::~AboutPage()
{
    delete ui;
}
