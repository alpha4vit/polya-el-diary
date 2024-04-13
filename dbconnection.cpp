#include "dbconnection.h"

QSqlDatabase DBConnection::db = QSqlDatabase::addDatabase("QPSQL");

DBConnection::DBConnection() {
    createConnection();
}

void executeSqlScript(const QString& filePath, QSqlDatabase &db)
{
    QFile file(filePath);
    if (!file.open(QIODevice::ReadOnly)) {
        qDebug() << "Failed to open SQL script file:" << file.errorString();
        return;
    }

    QTextStream in(&file);
    QString sqlQuery = in.readAll();
    qDebug() << sqlQuery;
    QStringList sqlQueries = in.readAll().split(';', Qt::SkipEmptyParts);
    QSqlQuery query(db);
    for (const QString& sqlQuery : sqlQueries) {
        if (!query.exec(sqlQuery)) {
            qDebug() << "Failed to execute SQL query:" << query.lastError().text();
            qDebug() << "Query:" << sqlQuery;
            return;
        }
    }

    qDebug() << "SQL script executed successfully";
}


void DBConnection::createConnection()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QPSQL");
    // db.setDatabaseName("D:\\programming\\qt\\polya-el-diary\\el-diary.db");
    db.setHostName("localhost");
    db.setPort(5432);
    db.setDatabaseName("el-diary");
    db.setUserName("postgres");
    db.setPassword("root");

    if (db.open()){
        qDebug() << "DBConnection setted!";
        this->db = db;
        // executeSqlScript("D:\\programming\\qt\\polya-el-diary\\db-init.sql", db);
    }
}


