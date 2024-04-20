#include "dbconnection.h"
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>

void createTables();

QSqlDatabase DBConnection::db = QSqlDatabase::addDatabase("QSQLITE");

DBConnection::DBConnection() {
    createConnection();
}


void DBConnection::createConnection()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("D:\\programming\\qt\\polya-el-diary\\el-diary.db");
    // db.setHostName("localhost");
    // db.setPort(5432);
    // db.setDatabaseName("el-diary");
    // db.setUserName("postgres");
    // db.setPassword("root");

    if (db.open()){
        qDebug() << "DBConnection setted!";
        this->db = db;
        //закомментировать после первого запуска!!!!!
        //createTables();

    }
}
