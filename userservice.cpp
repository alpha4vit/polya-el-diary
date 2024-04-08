#include "userservice.h"

UserService::UserService() {
}

QString UserService::getAllRecords()
{
    QString res;
    QSqlQuery query(DBConnection::db);
    if (query.exec("SELECT * FROM users")){
        while (query.next()) {
            QString id = query.value(0).toString();
            QString name = query.value(1).toString();
            QString email = query.value(2).toString();
            res += id + "\t" + name + "\t" + email + "\n";
        }
    }
    else {
        qDebug() << "Query execution failed:" << query.lastError().text();
    }
    return res;
}


bool UserService::isExists(QString username, QString password) {
    QSqlQuery query(DBConnection::db);
    query.prepare("SELECT COUNT(*) FROM users WHERE username = :username AND password = :password");
    query.bindValue(":username", username);
    query.bindValue(":password", password);
    if (query.exec()) {
        if (query.next()) {
            int count = query.value(0).toInt();
            return count > 0;
        } else {
            qDebug() << "No result returned";
            return false;
        }
    } else {
        qDebug() << "Query execution failed:" << query.lastError().text();
        return false;
    }
}



