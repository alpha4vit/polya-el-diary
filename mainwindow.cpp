#include "mainwindow.h"
#include "ui_mainwindow.h"

void get_groups(QVBoxLayout& group_menu_layout, QHBoxLayout& subject_menu_layout, Ui::MainWindow &ui, MainWindow *mainWindow);
void get_subjects(int group_id, Ui::MainWindow &ui, QHBoxLayout& subject_menu_layout, MainWindow *mainWindow);

MainWindow::MainWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QVBoxLayout *group_menu_layout = new QVBoxLayout(ui->group_menu->widget());
    QHBoxLayout *subject_menu_layout = new QHBoxLayout(ui->subject_menu->widget());
    ui->subject_menu->setLayout(subject_menu_layout);
    ui->group_menu->setLayout(group_menu_layout);

    get_groups(*group_menu_layout, *subject_menu_layout, *this->ui, this);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_group_button_clicked()
{
    QPushButton* button = qobject_cast<QPushButton*>(sender());
    if (button) {
        QString objectName = button->objectName();
        qDebug() << "Clicked on button with object name:" << objectName;
        QLayoutItem *child;
        while ((child = ui->subject_menu->layout()->takeAt(0)) != nullptr) {
            qDebug() << "Delete^ " << child->widget()->objectName();
            delete child->widget();
            delete child;
        }
        QHBoxLayout *subject_menu_layout = qobject_cast<QHBoxLayout*>(ui->subject_menu->layout());
        if (subject_menu_layout) {
            QList<Subject> subjects = SubjectService::get_all_by_group_id(button->objectName().toLong());
            for (Subject sb : subjects){
                qDebug() << "Subject: " << sb.name;
                QPushButton *pushButton = new QPushButton(sb.name, ui->subject_menu->widget());
                pushButton->setObjectName(QString::number(sb.id));
                pushButton->setMaximumWidth(150);
                pushButton->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
                connect(pushButton, &QPushButton::clicked, this, &MainWindow::on_subject_button_clicked);
                subject_menu_layout->addWidget(pushButton);
            }
        }
    }
}

void MainWindow::on_subject_button_clicked()
{
    QPushButton* button = qobject_cast<QPushButton*>(sender());
    if (button) {
        QString objectName = button->objectName();
        qDebug() << "Clicked on button with object name:" << objectName;

    }
}


void get_groups(QVBoxLayout& group_menu_layout, QHBoxLayout& subject_menu_layout, Ui::MainWindow &ui, MainWindow *mainWindow){
    QList<Group> groups = GroupService::get_all();
    int index = 0;
    for (Group gr : groups){
        if (index == 0)
        {
            get_subjects(gr.id, ui, subject_menu_layout, mainWindow);
        }
        QPushButton *pushButton = new QPushButton(gr.name, ui.group_menu->widget());
        pushButton->setObjectName(QString::number(gr.id));
        QObject::connect(pushButton, &QPushButton::clicked, mainWindow, &MainWindow::on_group_button_clicked);
        group_menu_layout.addWidget(pushButton);
    }

}

void get_subjects(int group_id, Ui::MainWindow &ui, QHBoxLayout& subject_menu_layout, MainWindow *mainWindow){
    QList<Subject> subjects = SubjectService::get_all_by_group_id(group_id);
    for (Subject sb : subjects){
        QPushButton *pushButton = new QPushButton(sb.name, ui.subject_menu->widget());
        pushButton->setObjectName(QString::number(sb.id));
        pushButton->setMaximumWidth(150);
        pushButton->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        QObject::connect(pushButton, &QPushButton::clicked, mainWindow, &MainWindow::on_subject_button_clicked);
        subject_menu_layout.addWidget(pushButton);
    }
}

