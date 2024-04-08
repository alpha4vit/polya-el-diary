#ifndef ELECTRONICDIARY_H
#define ELECTRONICDIARY_H

#include <AboutPage.h>
#include <MainWindow.h>
#include <QMainWindow>
#include <QMessageBox>
#include <UserService.h>


QT_BEGIN_NAMESPACE
namespace Ui {
class ElectronicDiary;
}
QT_END_NAMESPACE

class ElectronicDiary : public QMainWindow
{
    Q_OBJECT

public:
    ElectronicDiary(QWidget *parent = nullptr);
    ~ElectronicDiary();



private slots:
    void on_pushButton_3_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::ElectronicDiary *ui;
    MainWindow *mainWindow;
    AboutPage *about;
};
#endif // ELECTRONICDIARY_H
