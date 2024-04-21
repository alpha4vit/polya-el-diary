#ifndef STUDENTDELETEFORM_H
#define STUDENTDELETEFORM_H

#include <QDialog>
#include <studentservice.h>
#include <QMessageBox>

namespace Ui {
class StudentDeleteForm;
}

class StudentDeleteForm : public QDialog
{
    Q_OBJECT

public:
    explicit StudentDeleteForm(long group_id, QWidget *parent = nullptr);
    ~StudentDeleteForm();
    long group_id;
    long selected_student_id;
    bool agree_box_val;
    bool check_delete_availability();
signals:
    void student_deleted();
private slots:
    void on_agree_box_stateChanged(int arg1);

    void on_student_select_currentIndexChanged(int index);

    void on_delete_button_clicked();

private:
    Ui::StudentDeleteForm *ui;
};

#endif // STUDENTDELETEFORM_H
