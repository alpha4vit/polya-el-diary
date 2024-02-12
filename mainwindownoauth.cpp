#include "mainwindownoauth.h"
#include "ui_mainwindownoauth.h"

MainWindowNoAuth::MainWindowNoAuth(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::MainWindowNoAuth)
{
    ui->setupUi(this);
}

MainWindowNoAuth::~MainWindowNoAuth()
{
    delete ui;
}
