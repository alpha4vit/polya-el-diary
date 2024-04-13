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
    void handle_grade_created();
private slots:
    void on_grade_create_button_clicked();

private:
    Ui::MainWindow *ui;
    GradeCreateForm *grade_create_form;
};

#endif // MAINWINDOW_H
