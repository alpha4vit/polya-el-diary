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


