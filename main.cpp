#include "electronicdiary.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    DBConnection connection;
    ElectronicDiary w;
    w.show();
    return a.exec();
}
