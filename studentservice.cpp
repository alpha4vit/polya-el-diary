#include "studentservice.h"

StudentService::StudentService() {}
QList<Student> StudentService::get_all()
{
    QList<Student> result;
    QSqlQuery query(DBConnection::db);
    query.prepare("select * from students s order by s.lastname");
    if (query.exec()){
        while (query.next()) {
            long id = query.value(0).toLongLong();
            QString name = query.value(1).toString();
            QString lastname = query.value(2).toString();
            QString surname = query.value(3).toString();
            double rating = query.value(4).toDouble();
            long group_id = query.value(6).toLongLong();
            Student student(id, name, surname, lastname, rating, group_id);
            result.append(student);
        }
    }
    else {
        qDebug() << "Query execution failed:" << query.lastError().text();
    }
    return result;
}

bool StudentService::save(Student student)
{
    QSqlQuery query(DBConnection::db);
    query.prepare("insert into students(name, surname, lastname, rating, group_id) VALUES (:name, :surname, :lastname, 0.0, :group_id);");
    query.bindValue(":name", student.name);
    query.bindValue(":surname", student.surname);
    query.bindValue(":lastname", student.lastname);
    query.bindValue(":rating", student.rating);
    query.bindValue(":group_id", QVariant::fromValue(student.group_id));
    return query.exec();
}

QList<Student> StudentService::get_by_group(long group_id, QString lastnameSearch)
{
    QList<Student> result;
    QSqlQuery query(DBConnection::db);
    if (lastnameSearch != "" && lastnameSearch.trimmed() != ""){
        lastnameSearch = lastnameSearch.trimmed();
        lastnameSearch = lastnameSearch.toLower();
        lastnameSearch[0] = lastnameSearch[0].toUpper();
        query.prepare("SELECT * FROM students s WHERE s.group_id = :group_id AND LOWER(s.surname) LIKE LOWER(:lastnameSearch || '%') ORDER BY s.surname");
        query.bindValue(":lastnameSearch", QVariant::fromValue(lastnameSearch));
    }
    else {
        query.prepare("select * from students s where s.group_id = :group_id order by s.lastname");
    }
    query.bindValue(":group_id", QVariant::fromValue(group_id));
    if (query.exec()){
        while (query.next()) {
            long id = query.value(0).toLongLong();
            QString name = query.value(1).toString();
            QString lastname = query.value(2).toString();
            QString surname = query.value(3).toString();
            double rating = query.value(4).toDouble();
            long group_id = query.value(5).toLongLong();
            Student student(id, name, surname, lastname, rating, group_id);
            result.append(student);
        }
    }
    else {
        qDebug() << "Query execution failed:" << query.lastError().text();
    }
    return result;
}

QList<Student> StudentService::get_by_group_unachievers(long group_id, QString lastnameSearch)
{
    QList<Student> result;
    QSqlQuery query(DBConnection::db);
    if (lastnameSearch != "" && lastnameSearch.trimmed() != ""){
        lastnameSearch = lastnameSearch.trimmed();
        lastnameSearch = lastnameSearch.toLower();
        lastnameSearch[0] = lastnameSearch[0].toUpper();
        query.prepare("SELECT * FROM students s JOIN grades g ON g.student_id = s.id WHERE g.value <= 3 AND s.group_id = :group_id AND LOWER(s.surname) LIKE LOWER(:lastnameSearch || '%') ORDER BY s.surname");
        query.bindValue(":lastnameSearch", QVariant::fromValue(lastnameSearch));
    }
    else {
        query.prepare("SELECT * FROM students s JOIN grades g ON g.student_id = s.id WHERE g.value <= 3 AND s.group_id = :group_id ORDER BY s.surname");
    }
    query.bindValue(":group_id", QVariant::fromValue(group_id));
    if (query.exec()){
        while (query.next()) {
            long id = query.value(0).toLongLong();
            QString name = query.value(1).toString();
            QString lastname = query.value(2).toString();
            QString surname = query.value(3).toString();
            double rating = query.value(4).toDouble();
            long group_id = query.value(5).toLongLong();
            Student student(id, name, surname, lastname, rating, group_id);
            result.append(student);
        }
    }
    else {
        qDebug() << "Query execution failed:" << query.lastError().text();
    }
    return result;
}

void StudentService::update_rating(long student_id, double rating)
{
    QSqlQuery query(DBConnection::db);
    query.prepare("update students set rating = :rating where id = :student_id");
    query.bindValue(":rating", rating);
    query.bindValue(":student_id", QVariant::fromValue(student_id));
    query.exec();
}

bool StudentService::delete_by_id(long student_id)
{
    QSqlQuery query(DBConnection::db);
    query.prepare("delete from grades g where g.student_id = :student_id");
    query.bindValue(":student_id", QVariant::fromValue(student_id));
    query.exec();
    query.prepare("delete from students where id = :student_id");
    query.bindValue(":student_id", QVariant::fromValue(student_id));
    return query.exec();
}

bool StudentService::delete_all_by_group_id(long group_id)
{
    QList<Student> students = get_by_group(group_id, "");
    foreach (Student student, students) {
        delete_by_id(student.id);
    }
    return true;
}

