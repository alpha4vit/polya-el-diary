#ifndef GRADESERVICE_H
#define GRADESERVICE_H

#include <QDateTime>
#include <QSqlQuery>
#include <DBConnection.h>
#include <QSqlQuery>

struct Grade{
public:
    long id;
    int value;
    QString date;
    long student_id;
    long subject_id;
    Grade(int id, int value, QString date, long student_id, long subject_id){
        this->id = id;
        this->value = value;
        this->date = date;
        this->student_id = student_id;
        this->subject_id = subject_id;
    }
};

class GradeService
{
public:
    GradeService();
    static QList<Grade> get_all_by_group_and_subject(long group_id, long subject_id);
    static QList<Grade> get_all_by_student_and_subject(long student_id, long subject_id);
    static void create_new_grade(Grade &grade);
};

#endif // GRADESERVICE_H
