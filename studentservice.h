#ifndef STUDENTSERVICE_H
#define STUDENTSERVICE_H

#include <QDateTime>
#include <QString>



struct Student {
public:
    long id;
    QString name;
    QString surname;
    QString lastname;
    double rating;
    QDateTime date;
};

class StudentService
{
public:
    StudentService();
};

#endif // STUDENTSERVICE_H
