#include "dateconverter.h"

DateConverter::DateConverter() {}

QString DateConverter::convertFromDb(QString date)
{
    QDateTime dateTime = QDateTime::fromString(date, "yyyy-MM-dd");
    //dateTime = dateTime.addDays(-1);
    return dateTime.toString("dd-MM-yyyy");
}

QString DateConverter::convertForDb(QDate date)
{
    return date.toString("yyyy-MM-dd");
}


