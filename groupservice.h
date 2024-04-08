#ifndef GROUPSERVICE_H
#define GROUPSERVICE_H

#include <QString>
#include <dbconnection.h>

struct Group{
public:
    long id;
    QString name;
    Group(long id, QString name){
        this->id = id;
        this->name = name;
    };
};


class GroupService
{
public:
    GroupService();
    static QList<Group> get_all();
};

#endif // GROUPSERVICE_H
