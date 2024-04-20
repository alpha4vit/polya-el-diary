#include "gradeservice.h"

#include <QMessageBox>

GradeService::GradeService() {}

QList<Grade> GradeService::get_all_by_group_and_subject(long group_id, long subject_id)
{
    QList<Grade> grades;
    QSqlQuery query(DBConnection::db);
    query.prepare("SELECT g.* FROM grades g join students s on s.id = g.student_id where g.subject_id = :subject_id and s.group_id = :group_id order by g.date");
    query.bindValue(":group_id", QVariant::fromValue(group_id));
    query.bindValue(":subject_id", QVariant::fromValue(subject_id));
    if (query.exec()){
        while (query.next()) {
            long id = query.value(0).toLongLong();
            long value = query.value(1).toInt();
            QString date = query.value(2).toString();
            long student_id = query.value(3).toLongLong();
            long subject_id = query.value(4).toLongLong();
            Grade grade(id, value, date, student_id, subject_id);
            grades.append(grade);
        }
    }
    else {
        qDebug() << "Query execution failed:" << query.lastError().text();
    }
    return grades;
}

QList<Grade> GradeService::get_all_by_student_and_subject(long student_id, long subject_id)
{
    QList<Grade> grades;
    QSqlQuery query(DBConnection::db);
    query.prepare("SELECT g.* FROM grades g where g.subject_id = :subject_id and g.student_id = :student_id order by g.date");
    query.bindValue(":student_id", QVariant::fromValue(student_id));
    query.bindValue(":subject_id", QVariant::fromValue(subject_id));
    if (query.exec()){
        while (query.next()) {
            long id = query.value(0).toLongLong();
            long value = query.value(1).toInt();
            QString date = query.value(2).toString();
            long student_id = query.value(3).toLongLong();
            long subject_id = query.value(4).toLongLong();
            Grade grade(id, value, date, student_id, subject_id);
            grades.append(grade);
        }
    }
    else {
        qDebug() << "Query execution failed:" << query.lastError().text();
    }
    return grades;
}

QList<Grade> GradeService::get_all_by_student(long student_id)
{
    QList<Grade> grades;
    QSqlQuery query(DBConnection::db);
    query.prepare("SELECT g.* FROM grades g where g.student_id = :student_id order by g.date");
    query.bindValue(":student_id", QVariant::fromValue(student_id));
    if (query.exec()){
        while (query.next()) {
            long id = query.value(0).toLongLong();
            long value = query.value(1).toInt();
            QString date = query.value(2).toString();
            long student_id = query.value(3).toLongLong();
            long subject_id = query.value(4).toLongLong();
            Grade grade(id, value, date, student_id, subject_id);
            grades.append(grade);
        }
    }
    else {
        qDebug() << "Query execution failed:" << query.lastError().text();
    }
    return grades;
}

bool GradeService::create_new_grade(Grade &grade)
{
    QList<Grade> grades;
    QSqlQuery query(DBConnection::db);
    query.prepare("insert into grades(value, date, student_id, subject_id) values (:value, :date, :student_id, :subject_id);");
    query.bindValue(":student_id", QVariant::fromValue(grade.student_id));
    query.bindValue(":subject_id", QVariant::fromValue(grade.subject_id));
    query.bindValue(":value", QVariant::fromValue(grade.value));
    query.bindValue(":date", QVariant::fromValue(grade.date));
    if (query.exec()){
        QList<Grade> grades = get_all_by_student(grade.student_id);
        int sum = 0;
        foreach (Grade grade, grades) {
            sum += grade.value;
        }
        StudentService::updateRating(grade.student_id, sum/grades.count());
        return true;
    }
    return false;
}
