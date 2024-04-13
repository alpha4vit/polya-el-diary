#include "gradecreateform.h"
#include "ui_gradecreateform.h"

GradeCreateForm::GradeCreateForm(long subject_id, long group_id, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::GradeCreateForm)
{
    ui->setupUi(this);
    this->group_id = group_id;
    this->subject_id= subject_id;
    QComboBox *select = ui->student_selector;
    QList<Student> students = StudentService::get_by_group(group_id);
    foreach (Student student, students) {
        select->addItem(student.lastname, QVariant::fromValue(student.id));
    }
    if (students.count() > 0){
        this->selected_student_id = students.at(0).id;
    }
    this->selected_date = QDateTime::currentDateTime();
    ui->date_picker->setDateTime(this->selected_date);
}

GradeCreateForm::~GradeCreateForm()
{
    delete ui;
}

void GradeCreateForm::on_create_button_clicked()
{
    if (this->selected_value != NULL && this->selected_value <= 10 && this->selected_value >= 0){
        Grade grade(NULL, this->selected_value, this->selected_date.toString(), this->selected_student_id, this->subject_id);
        GradeService::create_new_grade(grade);
    }
    else {
        QMessageBox::critical(this, QString::asprintf("Введены некорректные данные!"), QString::asprintf("Некорректное значение отметки!"));
    }
}


void GradeCreateForm::on_student_selector_activated(int index)
{
    this->selected_student_id = ui->student_selector->itemData(index).toInt();
}


void GradeCreateForm::on_grade_value_edit_textChanged(const QString &arg1)
{
    this->selected_value = arg1.toInt();
}

