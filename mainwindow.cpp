#include "mainwindow.h"
#include "ui_mainwindow.h"

void get_groups(QVBoxLayout& group_menu_layout, QHBoxLayout& subject_menu_layout, Ui::MainWindow &ui, MainWindow *mainWindow);
void get_subjects(int group_id, Ui::MainWindow &ui, QHBoxLayout& subject_menu_layout, MainWindow *mainWindow);

MainWindow::MainWindow(bool is_admin, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::MainWindow)
{
    this->is_admin = is_admin;
    ui->setupUi(this);
    if (!is_admin)
        ui->grade_create_button->setVisible(false);
    ui->grade_create_button->setEnabled(false);
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
        ui->tableView->setModel(nullptr);
        ui->grade_create_button->setEnabled(false);
        QString objectName = button->objectName();
        qDebug() << "Clicked on button with object name:" << objectName;
        this->group_id = objectName.toLong();
        QLayoutItem *child;
        while ((child = ui->subject_menu->layout()->takeAt(0)) != nullptr) {
            qDebug() << "Delete^ " << child->widget()->objectName();
            delete child->widget();
            delete child;
        }
        QHBoxLayout *subject_menu_layout = qobject_cast<QHBoxLayout*>(ui->subject_menu->layout());
        if (subject_menu_layout) {
            QList<Subject> subjects = SubjectService::get_all_by_group_id(button->objectName().toLong());
            for (Subject &sb : subjects){
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
        ui->grade_create_button->setEnabled(true);
        long subject_id = button->objectName().toLong();
        qDebug() << "Clicked on button with object name:" << subject_id;
        this->subject_id = subject_id;
        QStandardItemModel *model = this->create_table_model();
        ui->tableView->setModel(model);
    }
}



void get_groups(QVBoxLayout& group_menu_layout, QHBoxLayout& subject_menu_layout, Ui::MainWindow &ui, MainWindow *mainWindow){
    QList<Group> groups = GroupService::get_all();
    for (Group &gr : groups){
        QPushButton *pushButton = new QPushButton(gr.name, ui.group_menu->widget());
        pushButton->setObjectName(QString::number(gr.id));
        QObject::connect(pushButton, &QPushButton::clicked, mainWindow, &MainWindow::on_group_button_clicked);
        group_menu_layout.addWidget(pushButton);
    }

}

void get_subjects(int group_id, Ui::MainWindow &ui, QHBoxLayout& subject_menu_layout, MainWindow *mainWindow){
    QList<Subject> subjects = SubjectService::get_all_by_group_id(group_id);
    for (Subject &sb : subjects){
        QPushButton *pushButton = new QPushButton(sb.name, ui.subject_menu->widget());
        pushButton->setObjectName(QString::number(sb.id));
        pushButton->setMaximumWidth(150);
        pushButton->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        QObject::connect(pushButton, &QPushButton::clicked, mainWindow, &MainWindow::on_subject_button_clicked);
        subject_menu_layout.addWidget(pushButton);
    }
}


void MainWindow::on_grade_create_button_clicked()
{
    GradeCreateForm *grade_create_form = new GradeCreateForm(this->subject_id, this->group_id, this);
    grade_create_form->show();
    connect(grade_create_form, &GradeCreateForm::grade_created, this, &MainWindow::handle_grade_created);

}

void MainWindow::handle_grade_created()
{
    QStandardItemModel *model = this->create_table_model();
    ui->tableView->setModel(model);
}


QStandardItemModel* MainWindow::create_table_model(){
    QStandardItemModel *model = new QStandardItemModel(this);
    model->setHorizontalHeaderLabels({ tr("Фамилия") });
    QList<Grade> grades = GradeService::get_all_by_group_and_subject(this->group_id, subject_id);
    QMap<QString, int> createdCols;
    for (int i = 0; i < grades.count(); ++i){
        QString date = DateConverter::convertFromDb(grades.at(i).date);
        qDebug() << date;
        if (!createdCols.contains(date))
        {
            model->insertColumn(createdCols.count()+1);
            model->setHorizontalHeaderItem(createdCols.count()+1, new QStandardItem(date));
            createdCols.insert(date, createdCols.count()+1);
        }
        if (i == grades.count()-1){
            model->insertColumn(createdCols.count()+1);
            model->setHorizontalHeaderItem(createdCols.count()+1, new QStandardItem(this->avg_grade_cell_name));
            createdCols.insert(this->avg_grade_cell_name, createdCols.count()+1);
        }
    }
    QList<Student> students = StudentService::get_by_group(this->group_id);
    for (int i = 0; i < students.count(); ++i) {
        Student student = students.at(i);
        QStandardItem *itemName = new QStandardItem(student.lastname);
        model->setItem(i, 0, itemName);
        int grades_count = 0;
        int grades_sum = 0;
        for (int gr_ind = 0; gr_ind < grades.count(); ++gr_ind){
            Grade grade = grades.at(gr_ind);
            if (grade.student_id == student.id)
            {
                ++grades_count;
                grades_sum+=grade.value;
                QString date = DateConverter::convertFromDb(grade.date);
                if (createdCols.contains(date)){
                    QModelIndex index = model->index(i, createdCols.value(date));
                    QVariant value = QVariant(grade.value);
                    model->setData(index, value);
                }
            }
        }
        QModelIndex index = model->index(i, createdCols.value(this->avg_grade_cell_name));
        QVariant value = QVariant(grades_sum/grades_count);
        model->setData(index, value);
    }
    return model;
}

void MainWindow::on_search_input_textChanged(const QString &arg1)
{
    qDebug() << arg1;
}

