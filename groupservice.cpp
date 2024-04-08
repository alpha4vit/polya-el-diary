#include "groupservice.h"

GroupService::GroupService() {}

QList<Group> GroupService::get_all()
{
    QList<Group> result;
    QSqlQuery query(DBConnection::db);
    if (query.exec("SELECT * FROM groups")){
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
