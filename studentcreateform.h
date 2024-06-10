#ifndef STUDENTCREATEFORM_H
#define STUDENTCREATEFORM_H

#include <QDialog>
#include <studentservice.h>
#include <QMessageBox>


namespace Ui {
class StudentCreateForm;
}

class StudentCreateForm : public QDialog
{
    Q_OBJECT

public:
    explicit StudentCreateForm(long group_id, QWidget *parent = nullptr);
    ~StudentCreateForm();
    long group_id;
    QString studentName = "";
    QString studentSurname = "";
    QString studentLastname = "";
    void checkStudentCreateAvailability();
    QWidget *parent;
signals:
    void student_created();
private slots:
    void on_student_surname_input_textChanged(const QString &arg1);
    void on_student_lastname_input_textChanged(const QString &arg1);
    void on_student_name_input_textChanged(const QString &arg1);

    void on_create_button_clicked();

private:
    Ui::StudentCreateForm *ui;
};

#endif // STUDENTCREATEFORM_H
