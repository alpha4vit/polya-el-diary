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
    void handle_student_created();
    QStandardItemModel* create_table_model(QString lastnameSearch);
    const QString avg_grade_cell_name = "Ср. балл";
private slots:
    void on_grade_create_button_clicked();
    void on_search_input_textChanged(const QString &arg1);
    void on_student_create_button_clicked();

    void on_group_create_button_clicked();

private:
    Ui::MainWindow *ui;
    GradeCreateForm *grade_create_form;
    StudentCreateForm *student_create_form;
    GroupCreateForm *group_create_form;
};

#endif // MAINWINDOW_H
