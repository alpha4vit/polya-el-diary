#ifndef MAINWINDOWNOAUTH_H
#define MAINWINDOWNOAUTH_H

#include <QDialog>

namespace Ui {
class MainWindowNoAuth;
}

class MainWindowNoAuth : public QDialog
{
    Q_OBJECT

public:
    explicit MainWindowNoAuth(QWidget *parent = nullptr);
    ~MainWindowNoAuth();

private:
    Ui::MainWindowNoAuth *ui;
};

#endif // MAINWINDOWNOAUTH_H
