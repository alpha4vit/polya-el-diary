#include "studentdeleteform.h"
#include "ui_studentdeleteform.h"

StudentDeleteForm::StudentDeleteForm(long group_id, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::StudentDeleteForm)
{
    this->group_id = group_id;
    ui->setupUi(this);
    ui->delete_button->setEnabled(false);
    QComboBox *select = ui->student_select;
    QList<Student> students = StudentService::get_by_group(group_id, "");
    foreach (Student student, students) {
        select->addItem(student.lastname, QVariant::fromValue(student.id));
    }
    if (students.count() > 0){
        this->selected_student_id = students.at(0).id;
    }
}

StudentDeleteForm::~StudentDeleteForm()
{
    delete ui;
}

bool StudentDeleteForm::check_delete_availability()
{
    if (this->selected_student_id > 0 && this->agree_box_val)
        ui->delete_button->setEnabled(true);
}

void StudentDeleteForm::on_agree_box_stateChanged(int arg1)
{
    this->agree_box_val = static_cast<bool>(arg1);
    check_delete_availability();
}


void StudentDeleteForm::on_student_select_currentIndexChanged(int index)
{
    this->selected_student_id = index;
    check_delete_availability();
}



void StudentDeleteForm::on_delete_button_clicked()
{
    if (StudentService::delete_by_id(this->selected_student_id))
        emit student_deleted();
    else
        QMessageBox::critical(this, QString::asprintf("Ошибка удаления студента!"), QString::asprintf("Ошибка удаления студента!"));
}

