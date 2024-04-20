create table if not exists users
(
    id                INTEGER primary key AUTOINCREMENT,
    username          varchar(255),
    password          varchar(255),
    registration_date timestamptz
);

create table if not exists groups
(
    id   INTEGER primary key AUTOINCREMENT,
    name varchar(10)
);

create table if not exists students
(
    id       INTEGER primary key AUTOINCREMENT,
    name     varchar(20),
    surname  varchar(40),
    lastname varchar(40),
    rating   real default 0.0,
    group_id bigint not null references groups (id),
    constraint unique_student
            unique (name, lastname, surname)
);

create table if not exists subjects
(
    id   INTEGER primary key AUTOINCREMENT,
    name varchar(255)
);

create table if not exists grades
(
    id         INTEGER primary key AUTOINCREMENT,
    value      int,
    date       timestamptz,
    student_id bigint not null references students (id),
    subject_id bigint not null references subjects (id),
    constraint unique_grade_on_date_for_student
            unique (date, student_id, subject_id)
);

create table if not exists group_subject(
                                            group_id bigint not null references groups(id),
                                            subject_id bigint not null references subjects(id),
                                            constraint group_subject_unique unique(group_id, subject_id)
);

insert into users(id, username, password) values(1, '12345', '12345');

insert into groups(id, name) values(1, '1к9393');
insert into groups(id, name) values(2, '2к9392');
insert into groups(id, name) values(3, '2к9393');
insert into groups(id, name) values(4, '2к9391');
insert into groups(id, name) values(6, '1к9392');
insert into groups(id, name) values(7, '1к9394');
insert into groups(id, name) values(8, '1к9391');

insert into subjects(id, name) values(1, 'ТРПО');
insert into subjects(id, name) values(2, 'ОАИП');
insert into subjects(id, name) values(3, 'Математика');
insert into subjects(id, name) values(4, 'Тер. веор.');
insert into subjects(id, name) values(5, 'ППО');
insert into subjects(id, name) values(6, 'ИПО');
insert into subjects(id, name) values(7, 'АЛОВТ');
insert into subjects(id, name) values(8, 'ОИГ');
insert into subjects(id, name) values(9, 'ЗКИ');
insert into subjects(id, name) values(10, 'КПИЯП');
insert into subjects(id, name) values(11, 'ОПП');
insert into subjects(id, name) values(12, 'ТПО');
insert into subjects(id, name) values(13, 'ПСИП');
insert into subjects(id, name) values(14, 'ОПД');

insert into group_subject (group_id, subject_id) values (1, 9);
insert into group_subject (group_id, subject_id) values (1, 10);
insert into group_subject (group_id, subject_id) values (1, 11);
insert into group_subject (group_id, subject_id) values (1, 12);
insert into group_subject (group_id, subject_id) values (1, 13);
insert into group_subject (group_id, subject_id) values (1, 14);

insert into group_subject (group_id, subject_id) values (2, 1);
insert into group_subject (group_id, subject_id) values (2, 2);
insert into group_subject (group_id, subject_id) values (2, 3);
insert into group_subject (group_id, subject_id) values (2, 4);
insert into group_subject (group_id, subject_id) values (2, 5);
insert into group_subject (group_id, subject_id) values (2, 6);
insert into group_subject (group_id, subject_id) values (2, 7);
insert into group_subject (group_id, subject_id) values (2, 8);

INSERT INTO students(name, surname, lastname, rating, group_id) values('Роман', 'Гуринович', 'Дмитриевич', 0.0, 1);
INSERT INTO students(name, surname, lastname, rating, group_id) values('Антон', 'Малышев', 'Павлович', 0.0, 1);
INSERT INTO students(name, surname, lastname, rating, group_id) values('Полина', 'Масленникова', 'Сергеевна', 0.0, 2);
