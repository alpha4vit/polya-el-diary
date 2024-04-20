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
    long group_id;
    Student(long id, QString name, QString surname, QString lastname, double rating, long group_id){
        this->id = id;
        this->name = name;
        this->lastname = lastname;
        this->surname = surname;
        this->rating = rating;
        this->group_id = group_id;
    }
    Student (QString name, QString surname, QString lastname, long group_id){
        this->name = name;
        this->lastname = lastname;
        this->surname = surname;
        this->group_id = group_id;
    }
};

class StudentService
{
public:
    StudentService();
    static QList<Student> get_all();
    static bool save(Student student);
    static QList<Student> get_by_group(long group_id, QString lastnameSearch);
};

#endif // STUDENTSERVICE_H
