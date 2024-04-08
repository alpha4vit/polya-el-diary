create table if not exists users
(
    id                bigserial primary key,
    username          varchar(255),
    password          varchar(255),
    registration_date timestamptz
);

create table if not exists groups
(
    id   bigserial primary key,
    name varchar(10)
);

create table if not exists students
(
    id       bigserial primary key,
    name     varchar(20),
    surname  varchar(40),
    lastname varchar(40),
    rating   real default 0.0,
    group_id bigint not null references groups (id)
);

create table if not exists subjects
(
    id   bigserial primary key,
    name varchar(255)
);

create table if not exists grades
(
    id         bigserial primary key,
    value      int,
    date       timestamptz,
    student_id bigint not null references students (id),
    subject_id bigint not null references subjects (id)
);

create table if not exists group_subject(
    group_id bigint not null references groups(id),
    subject_id bigint not null references subjects(id),
    constraint group_subject_unique unique(group_id, subject_id)
);
