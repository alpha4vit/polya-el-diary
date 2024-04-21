#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QDialog>
#include <DBConnection.h>
#include <QSqlTableModel>
#include <UserService.h>
#include <groupservice.h>
#include <subjectservice.h>
#include <studentservice.h>
#include <QStandardItemModel>
#include <gradeservice.h>
#include <dateconverter.h>
#include <gradecreateform.h>
#include <studentcreateform.h>
#include <groupcreateform.h>
#include <studentdeleteform.h>
#include <groupdeleteform.h>


namespace Ui {
class MainWindow;
}

class MainWindow : public QDialog
{
    Q_OBJECT

public:
    explicit MainWindow(bool is_admin, QWidget *parent = nullptr);
    ~MainWindow();
    void on_group_button_clicked();
    void on_subject_button_clicked();
    long group_id;
    long subject_id;
    bool is_admin;
    QString lastnameSearch;
    void handle_grade_created();
    void handle_students_updated();
    void handle_groups_updated();
    QStandardItemModel* create_table_model(QString lastnameSearch);
    const QString avg_grade_cell_name = "Ср. балл";
private slots:
    void on_grade_create_button_clicked();
    void on_search_input_textChanged(const QString &arg1);
    void on_student_create_button_clicked();
    void on_group_create_button_clicked();

    void on_student_delete_button_clicked();

    void on_group_delete_button_clicked();

    void on_export_button_clicked();

private:
    Ui::MainWindow *ui;
    GradeCreateForm *grade_create_form;
    StudentCreateForm *student_create_form;
    GroupCreateForm *group_create_form;
    StudentDeleteForm *student_delete_form;
    GroupDeleteForm *group_delete_form;
};

#endif // MAINWINDOW_H
