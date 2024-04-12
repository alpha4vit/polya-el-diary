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

namespace Ui {
class MainWindow;
}

class MainWindow : public QDialog
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void on_group_button_clicked();
    void on_subject_button_clicked();
    long group_id;
    long subject_id;

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
