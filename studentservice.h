#ifndef STUDENTSERVICE_H
#define STUDENTSERVICE_H

#include <QDateTime>
#include <QString>
#include <QSqlQuery>
#include <DBConnection.h>

struct Student {
public:
    long id;
    QString name;
    QString surname;
    QString lastname;
    double rating;
    Student(long id, QString name, QString surname, QString lastname, double rating){
        this->id = id;
        this->name = name;
        this->lastname = lastname;
        this->surname = surname;
        this->rating = rating;
    }
};

class StudentService
{
public:
    StudentService();
    static QList<Student> get_all();
    static QList<Student> get_by_group(long group_id);
};

#endif // STUDENTSERVICE_H
