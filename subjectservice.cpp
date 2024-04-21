#include "subjectservice.h"

SubjectService::SubjectService() {}

QList<Subject> SubjectService::get_all_by_group_id(long subject_id)
{
    QList<Subject> result;
    QSqlQuery query(DBConnection::db);
    query.prepare("select s.* from group_subject gs JOIN subjects s on s.id = gs.subject_id WHERE gs.group_id = :subject_id order by s.name");
    query.bindValue(":subject_id", QVariant::fromValue(subject_id));
    if (query.exec()){
        while (query.next()) {
            long id = query.value(0).toLongLong();
            QString name = query.value(1).toString();
            Subject group(id, name);
            result.append(group);
        }
    }
    else {
        qDebug() << "Query execution failed:" << query.lastError().text();
    }
    return result;
}

QList<Subject> SubjectService::get_all()
{
    QList<Subject> result;
    QSqlQuery query(DBConnection::db);
    query.prepare("select * from subjects s order by s.name");
    if (query.exec()){
        while (query.next()) {
            long id = query.value(0).toLongLong();
            QString name = query.value(1).toString();
            Subject subject(id, name);
            result.append(subject);
        }
    }
    else {
        qDebug() << "Query execution failed:" << query.lastError().text();
    }
    return result;
}
