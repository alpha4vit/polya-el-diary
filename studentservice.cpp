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
            Student student(id, name, surname, lastname, rating);
            result.append(student);
        }
    }
    else {
        qDebug() << "Query execution failed:" << query.lastError().text();
    }
    return result;
}

QList<Student> StudentService::get_by_group(long group_id)
{
    QList<Student> result;
    QSqlQuery query(DBConnection::db);
    query.prepare("select * from students s where s.group_id = :group_id order by s.lastname");
    query.bindValue(":group_id", QVariant::fromValue(group_id));
    if (query.exec()){
        while (query.next()) {
            long id = query.value(0).toLongLong();
            QString name = query.value(1).toString();
            QString lastname = query.value(2).toString();
            QString surname = query.value(3).toString();
            double rating = query.value(4).toDouble();
            Student student(id, name, surname, lastname, rating);
            result.append(student);
        }
    }
    else {
        qDebug() << "Query execution failed:" << query.lastError().text();
    }
    return result;
}
