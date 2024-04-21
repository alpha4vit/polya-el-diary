#include "groupdeleteform.h"
#include "ui_groupdeleteform.h"

GroupDeleteForm::GroupDeleteForm(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::GroupDeleteForm)
{
    ui->setupUi(this);
    ui->delete_button->setEnabled(false);
    get_groups();
}

GroupDeleteForm::~GroupDeleteForm()
{
    delete ui;
}

bool GroupDeleteForm::check_delete_availability()
{
    if (this->selected_group_id > 0 && this->agree_box_val)
        ui->delete_button->setEnabled(true);
    else
        ui->delete_button->setEnabled(false);
}

void GroupDeleteForm::get_groups()
{
    QComboBox *select = ui->group_select;
    QList<Group> groups = GroupService::get_all();
    foreach (Group group, groups) {
        select->addItem(group.name, QVariant::fromValue(group.id));
    }
    if (groups.count() > 0){
        this->selected_group_id = groups.at(0).id;
    }
}

void GroupDeleteForm::on_group_select_currentIndexChanged(int index)
{
    this->selected_group_id = ui->group_select->itemData(index).toInt();;
    check_delete_availability();
}


void GroupDeleteForm::on_agree_box_stateChanged(int arg1)
{
    this->agree_box_val = arg1 > 0;
    check_delete_availability();
}


void GroupDeleteForm::on_delete_button_clicked()
{
    if (GroupService::delete_by_id(this->selected_group_id)){
        emit group_deleted();
        ui->group_select->clear();
        get_groups();
    }
    else
        QMessageBox::critical(this, QString::asprintf("Ошибка удаления группы!"), QString::asprintf("Ошибка удаления группы!"));
}

