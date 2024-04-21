#ifndef GROUPCREATEFORM_H
#define GROUPCREATEFORM_H

#include <QDialog>
#include <subjectservice.h>
#include <groupservice.h>
#include <QMessageBox>


namespace Ui {
class GroupCreateForm;
}

class GroupCreateForm : public QDialog
{
    Q_OBJECT

public:
    explicit GroupCreateForm(QWidget *parent = nullptr);
    ~GroupCreateForm();
    QString groupName = "";
    QList<int> selectedSubjects;
    QList<Subject> subjects;
    bool check_creation_availability();
signals:
    void group_created();
private slots:
    void on_groupNameInput_textChanged(const QString &arg1);

    void on_multiselect_currentTextChanged(const QString &arg1);

    void on_createButton_clicked();

private:
    Ui::GroupCreateForm *ui;
};

#endif // GROUPCREATEFORM_H
