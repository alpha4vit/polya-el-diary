#include "dbconnection.h"

QSqlDatabase DBConnection::db = QSqlDatabase::addDatabase("QPSQL");

DBConnection::DBConnection() {
    createConnection();
}

void DBConnection::createConnection()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QPSQL");
    db.setHostName("localhost");
    db.setPort(5432);
    db.setDatabaseName("el-diary");
    db.setUserName("postgres");
    db.setPassword("root");

    if (db.open()){
        this->db = db;
    }
}
