#ifndef USERSERVICE_H
#define USERSERVICE_H

#include <QString>
#include <QSqlQuery>
#include "qsqlerror.h"
#include "DBConnection.h"

class UserService
{
public:
    UserService();
    static QString getAllRecords();
    static bool isExists(QString username, QString password);
};

#endif // USERSERVICE_H
