#ifndef DATECONVERTER_H
#define DATECONVERTER_H

#include <QString>
#include <QDateTime>

class DateConverter
{
public:
    DateConverter();
    static QString convertFromDb(QString date);
    static QString convertForDb(QDate date);
};

#endif // DATECONVERTER_H
