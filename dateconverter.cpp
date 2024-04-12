#include "dateconverter.h"

DateConverter::DateConverter() {}

QString DateConverter::convertFromDb(QString date)
{
    QDateTime dateTime = QDateTime::fromString(date, "yyyy-MM-ddTHH:mm:ss.zzz");
    dateTime = dateTime.addDays(-1);
    return dateTime.toString("dd-MM-yyyy");
}
