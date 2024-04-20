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
    Group(QString name){
        this->name = name;
    }
    Group(){}
};


class GroupService
{
public:
    GroupService();
    static QList<Group> get_all();
    static long save(Group group);
    static bool save_group_subject(long group_id, long subject_id);
    static Group get_by_name(QString name);
};

#endif // GROUPSERVICE_H
