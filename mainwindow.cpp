#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPrinter>
#include <QPainter>
#include "xlsxdocument.h"
#include "xlsxchartsheet.h"
#include "xlsxcellrange.h"
#include "xlsxchart.h"
#include "xlsxrichstring.h"
#include "xlsxworkbook.h"
#include <QFileDialog>

void get_groups(QLayout& group_menu_layout, Ui::MainWindow &ui, MainWindow *mainWindow);
void get_subjects(int group_id, Ui::MainWindow &ui, QHBoxLayout& subject_menu_layout, MainWindow *mainWindow);

MainWindow::MainWindow(bool is_admin, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::MainWindow)
{
    this->is_admin = is_admin;
    ui->setupUi(this);
    if (!is_admin){
        ui->grade_create_button->setVisible(false);
        ui->group_create_button->setVisible(false);
        ui->student_create_button->setVisible(false);
        ui->student_delete_button->setVisible(false);
        ui->group_delete_button->setVisible(false);
    }
    ui->export_button->setEnabled(false);
    ui->grade_create_button->setEnabled(false);
    ui->student_create_button->setEnabled(false);
    ui->student_delete_button->setEnabled(false);
    ui->search_input->setReadOnly(true);
    QVBoxLayout *group_menu_layout = new QVBoxLayout(ui->group_menu->widget());
    QHBoxLayout *subject_menu_layout = new QHBoxLayout(ui->subject_menu->widget());
    ui->subject_menu->setLayout(subject_menu_layout);
    ui->group_menu->setLayout(group_menu_layout);
    get_groups(*group_menu_layout, *this->ui, this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_group_button_clicked()
{
    QPushButton* button = qobject_cast<QPushButton*>(sender());
    if (button) {
        ui->grade_create_button->setEnabled(false);
        ui->export_button->setEnabled(false);
        ui->search_input->setReadOnly(true);
        ui->search_input->setText("");
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
            get_subjects(this->group_id, *ui, *subject_menu_layout, this);
        }
    }
    ui->tableView->setModel(nullptr);
}

void MainWindow::on_subject_button_clicked()
{
    QPushButton* button = qobject_cast<QPushButton*>(sender());
    if (button) {
        ui->grade_create_button->setEnabled(true);
        ui->student_create_button->setEnabled(true);
        ui->student_delete_button->setEnabled(true);
        ui->export_button->setEnabled(true);
        ui->search_input->setReadOnly(false);
        long subject_id = button->objectName().toLong();
        qDebug() << "Clicked on button with object name:" << subject_id;
        this->subject_id = subject_id;
        QStandardItemModel *model = this->create_table_model(this->lastnameSearch);
        ui->tableView->setModel(model);
    }
}

void get_groups(QLayout& group_menu_layout, Ui::MainWindow &ui, MainWindow *mainWindow){
    QList<Group> groups = GroupService::get_all();
    QScrollArea *scrollArea = new QScrollArea(ui.group_menu->widget());
    QWidget *scrollAreaContent = new QWidget();
    QVBoxLayout *scrollAreaLayout = new QVBoxLayout(scrollAreaContent);
    scrollAreaLayout->setSizeConstraint(QLayout::SetFixedSize);
    for (Group &gr : groups){
        QPushButton *pushButton = new QPushButton(gr.name);
        pushButton->setObjectName(QString::number(gr.id));
        QObject::connect(pushButton, &QPushButton::clicked, mainWindow, &MainWindow::on_group_button_clicked);
        scrollAreaLayout->addWidget(pushButton);
    }
    scrollArea->setWidget(scrollAreaContent);
    scrollArea->setWidgetResizable(true);
    group_menu_layout.addWidget(scrollArea);
}

void get_subjects(int group_id, Ui::MainWindow &ui, QHBoxLayout& subject_menu_layout, MainWindow *mainWindow){
    QList<Subject> subjects = SubjectService::get_all_by_group_id(group_id);
    QScrollArea *scrollArea = new QScrollArea(ui.subject_menu->widget());
    QWidget *scrollAreaContent = new QWidget();
    QHBoxLayout *scrollAreaLayout = new QHBoxLayout(scrollAreaContent);
    scrollAreaLayout->setSizeConstraint(QLayout::SetFixedSize);
    for (Subject &sb : subjects){
        QPushButton *pushButton = new QPushButton(sb.name);
        pushButton->setObjectName(QString::number(sb.id));
        pushButton->setMaximumWidth(150);
        pushButton->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        QObject::connect(pushButton, &QPushButton::clicked, mainWindow, &MainWindow::on_subject_button_clicked);
        scrollAreaLayout->addWidget(pushButton);
    }
    scrollArea->setWidget(scrollAreaContent);
    scrollArea->setWidgetResizable(true);
    subject_menu_layout.addWidget(scrollArea);
}

void MainWindow::on_grade_create_button_clicked()
{
    GradeCreateForm *grade_create_form = new GradeCreateForm(this->subject_id, this->group_id, this->lastnameSearch, this);
    grade_create_form->show();
    connect(grade_create_form, &GradeCreateForm::grade_created, this, &MainWindow::handle_grade_created);

}

void MainWindow::handle_grade_created()
{
    QStandardItemModel *model = this->create_table_model(this->lastnameSearch);
    ui->tableView->setModel(model);
}


QStandardItemModel* MainWindow::create_table_model(QString lastnameSearch){
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
    QList<Student> students = StudentService::get_by_group(this->group_id, lastnameSearch);
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
        if (grades_count!=0)
        {
            QModelIndex index = model->index(i, createdCols.value(this->avg_grade_cell_name));
            QVariant value = QVariant(grades_sum/grades_count);
            model->setData(index, value);
        }

    }
    return model;
}

void MainWindow::on_search_input_textChanged(const QString &arg1)
{;
    this->lastnameSearch = arg1;
    QStandardItemModel *model = this->create_table_model(this->lastnameSearch);
    ui->tableView->setModel(model);
}


void MainWindow::handle_students_updated()
{
    QStandardItemModel *model = this->create_table_model(this->lastnameSearch);
    ui->tableView->setModel(model);
}

void MainWindow::handle_groups_updated()
{
    QLayout *group_menu_layout = ui->group_menu->layout();
    QLayoutItem *child;
    while ((child = ui->group_menu->layout()->takeAt(0)) != nullptr) {
        delete child->widget();
        delete child;
    }
    while ((child = ui->subject_menu->layout()->takeAt(0)) != nullptr) {
        delete child->widget();
        delete child;
    }
    get_groups(*group_menu_layout, *ui, this);
}

void MainWindow::on_student_create_button_clicked()
{
    this->student_create_form = new StudentCreateForm(this->group_id, this);
    this->student_create_form->show();
    connect(student_create_form, &StudentCreateForm::student_created, this, &MainWindow::handle_students_updated);
}


void MainWindow::on_group_create_button_clicked()
{
    this->group_create_form = new GroupCreateForm(this);
    this->group_create_form->show();
    connect(group_create_form, &GroupCreateForm::group_created, this, &MainWindow::handle_groups_updated);
}


void MainWindow::on_student_delete_button_clicked()
{
    this->student_delete_form = new StudentDeleteForm(this->group_id, this);
    this->student_delete_form->show();
    connect(student_delete_form, &StudentDeleteForm::student_deleted, this, &MainWindow::handle_students_updated);
}


void MainWindow::on_group_delete_button_clicked()
{
    this->group_delete_form = new GroupDeleteForm(this);
    this->group_delete_form->show();
    connect(group_delete_form, &GroupDeleteForm::group_deleted, this, &MainWindow::handle_groups_updated);
}

void MainWindow::on_export_button_clicked()
{
    qDebug() << "Начало обработки кнопки экспорта";
    try {
        QAbstractItemModel *model = ui->tableView->model();
        if (!model) {
            qDebug() << "Модель данных TableView не установлена";
            return;
        }
        int rowCount = model->rowCount();
        int columnCount = model->columnCount();
        QStringList columnNames;
        for (int col = 0; col < columnCount; ++col) {
            QVariant headerData = model->headerData(col, Qt::Horizontal);
            columnNames << headerData.toString();
        }
        QString fileName = QFileDialog::getSaveFileName(this, "Сохранить Excel", QDir::homePath(), "Excel файлы (*.xlsx)");
        qDebug() << "Выбран файл для сохранения:" << fileName;
        if (!fileName.isEmpty()) {
            QXlsx::Document xlsx;
            for (int col = 0; col < columnCount; ++col) {
                xlsx.write(1, col + 1, columnNames.at(col));
            }
            for (int row = 0; row < rowCount; ++row) {
                for (int col = 0; col < columnCount; ++col) {
                    QModelIndex index = model->index(row, col);
                    QVariant data = model->data(index);
                    xlsx.write(row + 2, col + 1, data.toString());
                }
            }
            xlsx.saveAs(fileName);
            qDebug() << "Файл успешно сохранен";
        } else {
            qDebug() << "Пользователь отменил выбор файла";
        }
    } catch (const std::exception& e) {
        qDebug() << "Произошло исключение при сохранении файла Excel:" << e.what();
    }
}

