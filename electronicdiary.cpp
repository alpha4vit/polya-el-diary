#include "electronicdiary.h"
#include "ui_electronicdiary.h"

ElectronicDiary::ElectronicDiary(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::ElectronicDiary)
{
    ui->setupUi(this);
}

ElectronicDiary::~ElectronicDiary()
{
    delete ui;
}



void ElectronicDiary::on_pushButton_3_clicked()
{
    QString username = "admin";
    QString password = "123456";

    if (ui->lineEdit->text() == username && ui->lineEdit_2->text() == password){
        hide();
        mainWindow = new MainWindow(this);
        mainWindow->show();
    }
    else {
        QMessageBox::critical(this, QString::asprintf("Ошибка аутентификации!"), QString::asprintf("Перепроверьте корректность данных!"));
    }

}


void ElectronicDiary::on_pushButton_clicked()
{
    hide();
    mainWindowNoAuth = new MainWindowNoAuth();
    mainWindowNoAuth->show();
}


void ElectronicDiary::on_pushButton_2_clicked()
{
    hide();
    about = new AboutPage();
    about->show();
}

