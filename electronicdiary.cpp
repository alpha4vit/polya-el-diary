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
    QString username = this->ui->lineEdit->text();
    QString password = this->ui->lineEdit_2->text();
    UserService userService;
    if (userService.isExists(username, password)){
        hide();
        mainWindow = new MainWindow(true, this);
        mainWindow->show();
    }
    else {
        QMessageBox::critical(this, QString::asprintf("Ошибка аутентификации!"), QString::asprintf("Перепроверьте корректность данных!"));
    }

}


void ElectronicDiary::on_pushButton_clicked()
{
    hide();
    mainWindow = new MainWindow(false, this);
    mainWindow->show();
}

void ElectronicDiary::on_pushButton_2_clicked()
{
    hide();
    about = new AboutPage();
    about->show();
}

