#include "groupcreateform.h"
#include "ui_groupcreateform.h"

GroupCreateForm::GroupCreateForm(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::GroupCreateForm)
{
    ui->setupUi(this);
    ui->createButton->setEnabled(false);
    this->subjects = SubjectService::get_all();
    foreach (Subject subject, this->subjects) {
        ui->multiselect->addItem(subject.name, QVariant::fromValue(subject.id));
    }
}

GroupCreateForm::~GroupCreateForm()
{
    delete ui;
}

bool GroupCreateForm::checkCreationAvailability()
{
    if (this->groupName != "" && !this->selectedSubjects.empty())
        ui->createButton->setEnabled(true);
    else
        ui->createButton->setEnabled(false);
}

void GroupCreateForm::on_groupNameInput_textChanged(const QString &arg1)
{
    this->groupName = arg1.trimmed();
    if (this->groupName != ""){
        this->groupName = this->groupName.toLower();
        this->groupName[0] = this->groupName[0].toUpper();
    }
    checkCreationAvailability();
}


void GroupCreateForm::on_multiselect_currentTextChanged(const QString &arg1)
{
    QList<QString> subjects = arg1.split(";");
    QList<int> selected;
    foreach (QString subjectName, subjects) {
        foreach (Subject subject, this->subjects) {
            if (subject.name == subjectName){
                selected.append(subject.id);
                qDebug() << subject.id;
            }
        }
    }
    this->selectedSubjects = selected;
    checkCreationAvailability();
}


void GroupCreateForm::on_createButton_clicked()
{
    Group group(this->groupName);
    int group_id = GroupService::save(group);
    if (group_id > 0){
        foreach (int subject_id, this->selectedSubjects) {
            GroupService::save_group_subject(group_id, subject_id);
        }
    }
    else{
        QMessageBox::critical(this, QString::asprintf("Ошибка добавления группы!"), QString::asprintf("Группа с данным названием уже существует!"));
    }
}

