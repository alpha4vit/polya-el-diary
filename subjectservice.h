#ifndef SUBJECTSERVICE_H
#define SUBJECTSERVICE_H

#include <QString>
#include <dbconnection.h>

struct Subject{
public:
    long id;
    QString name;
    Subject(long id, QString name){
        this->id = id;
        this->name = name;
    }
};

class SubjectService
{
public:
    SubjectService();
    static QList<Subject> get_all_by_group_id(long group_id);
};

#endif // SUBJECTSERVICE_H
