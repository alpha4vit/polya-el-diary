#include "studentcreateform.h"
#include "ui_studentcreateform.h"

StudentCreateForm::StudentCreateForm(long group_id, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::StudentCreateForm)
{
    ui->setupUi(this);
    this->group_id = group_id;
    ui->create_button->setEnabled(false);
}

StudentCreateForm::~StudentCreateForm()
{
    delete ui;
}

void StudentCreateForm::checkStudentCreateAvailability()
{
    if (this->studentLastname != "" && this->studentName != "" && this->studentSurname != "")
        ui->create_button->setEnabled(true);
    else
        ui->create_button->setEnabled(false);
}


void StudentCreateForm::on_student_surname_input_textChanged(const QString &arg1)
{
    this->studentSurname = arg1.trimmed();
    if (this->studentSurname != "")
    {
        this->studentSurname = this->studentSurname.toLower();
        this->studentSurname[0] = this->studentSurname[0].toUpper();
    }
    checkStudentCreateAvailability();
}


void StudentCreateForm::on_student_lastname_input_textChanged(const QString &arg1)
{
    this->studentLastname = arg1.trimmed();
    if (this->studentLastname != "")
    {
        this->studentLastname = this->studentLastname.toLower();
        this->studentLastname[0] = this->studentLastname[0].toUpper();
    }
    checkStudentCreateAvailability();
}


void StudentCreateForm::on_student_name_input_textChanged(const QString &arg1)
{
    this->studentName = arg1.trimmed();
    if (this->studentName != ""){
        this->studentName = this->studentName.toLower();
        this->studentName[0] = this->studentName[0].toUpper();
    }
    checkStudentCreateAvailability();
}


void StudentCreateForm::on_create_button_clicked()
{
    Student student(this->studentName, this->studentSurname, this->studentLastname, this->group_id);
    if (StudentService::save(student))
        emit student_created();
    else{
         QMessageBox::critical(this, QString::asprintf("Ошибка добавления студента!"), QString::asprintf("Такой студент уже существует!"));
    }
}

