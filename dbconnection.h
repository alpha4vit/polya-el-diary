#ifndef DBCONNECTION_H
#define DBCONNECTION_H

#include <QtSql>

class DBConnection
{
public:
    static QSqlDatabase db;
    void createConnection();
    DBConnection();
};

#endif // DBCONNECTION_H
