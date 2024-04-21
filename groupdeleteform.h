#ifndef GROUPDELETEFORM_H
#define GROUPDELETEFORM_H

#include <QDialog>
#include <groupservice.h>
#include <QMessageBox>

namespace Ui {
class GroupDeleteForm;
}

class GroupDeleteForm : public QDialog
{
    Q_OBJECT

public:
    explicit GroupDeleteForm(QWidget *parent = nullptr);
    ~GroupDeleteForm();
    long selected_group_id;
    bool agree_box_val = false;
    bool check_delete_availability();
    void get_groups();
signals:
    void group_deleted();
private slots:
    void on_group_select_currentIndexChanged(int index);

    void on_agree_box_stateChanged(int arg1);

    void on_delete_button_clicked();

private:
    Ui::GroupDeleteForm *ui;
};

#endif // GROUPDELETEFORM_H
