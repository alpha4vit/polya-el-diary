#include "groupservice.h"

GroupService::GroupService() {}

QList<Group> GroupService::get_all()
{
    QList<Group> result;
    QSqlQuery query(DBConnection::db);
    if (query.exec("SELECT * FROM groups g order by g.name")){
        while (query.next()) {
            long id = query.value(0).toLongLong();
            QString name = query.value(1).toString();
            Group group(id, name);
            result.append(group);
        }
    }
    else {
        qDebug() << "Query execution failed:" << query.lastError().text();
    }
    return result;
}

long GroupService::save(Group group)
{
    QSqlQuery query(DBConnection::db);
    query.prepare("insert into groups(name) VALUES (:name);");
    query.bindValue(":name", group.name);
    if (query.exec()){
        Group created = get_by_name(group.name);
        if (created.id > 0)
            return created.id;
    }
    else {
        qDebug() << "Query execution failed:" << query.lastError().text();
    }
    return -1;
}

bool GroupService::save_group_subject(long group_id, long subject_id)
{
    QSqlQuery query(DBConnection::db);
    query.prepare("insert into group_subject(group_id, subject_id) VALUES (:group_id, :subject_id);");
    query.bindValue(":group_id", QVariant::fromValue(group_id));
    query.bindValue(":subject_id", QVariant::fromValue(subject_id));
    return query.exec();
}

Group GroupService::get_by_name(QString name)
{
    QList<Group> result;
    QSqlQuery query(DBConnection::db);
    query.prepare("SELECT * FROM groups g where g.name = :name");
    query.bindValue(":name", name);
    if (query.exec()){
        while (query.next()) {
            long id = query.value(0).toLongLong();
            QString name = query.value(1).toString();
            Group group(id, name);
            return group;
        }
    }
    else {
        qDebug() << "Query execution failed:" << query.lastError().text();
    }
    return Group();
}

bool GroupService::delete_by_id(long group_id)
{
    StudentService::delete_all_by_group_id(group_id);
    QSqlQuery query(DBConnection::db);
    query.prepare("delete from groups where id = :group_id");
    query.bindValue(":group_id", QVariant::fromValue(group_id));
    return query.exec();
}
