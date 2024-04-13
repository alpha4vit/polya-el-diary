#ifndef GRADECREATEFORM_H
#define GRADECREATEFORM_H

#include <QDialog>
#include <studentservice.h>
#include <QMessageBox>
#include "gradeservice.h"

namespace Ui {
class GradeCreateForm;
}

class GradeCreateForm : public QDialog
{
    Q_OBJECT

public:
    explicit GradeCreateForm(long subject_id, long group_id, QWidget *parent = nullptr);
    ~GradeCreateForm();
    long subject_id;
    long group_id;
    long selected_student_id;
    int selected_value;
    QDateTime selected_date;

private slots:
    void on_create_button_clicked();

    void on_student_selector_activated(int index);

    void on_grade_value_edit_textChanged(const QString &arg1);

private:
    Ui::GradeCreateForm *ui;
};

#endif // GRADECREATEFORM_H
