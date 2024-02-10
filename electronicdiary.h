#ifndef ELECTRONICDIARY_H
#define ELECTRONICDIARY_H

#include <QMainWindow>

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
    void on_pushButton_clicked();

private:
    Ui::ElectronicDiary *ui;
};
#endif // ELECTRONICDIARY_H
