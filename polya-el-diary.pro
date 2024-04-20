QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets sql

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    aboutpage.cpp \
    dateconverter.cpp \
    dbconnection.cpp \
    gradecreateform.cpp \
    gradeservice.cpp \
    groupcreateform.cpp \
    groupservice.cpp \
    main.cpp \
    electronicdiary.cpp \
    mainwindow.cpp \
    multiselectcombobox.cpp \
    studentcreateform.cpp \
    studentservice.cpp \
    subjectservice.cpp \
    userservice.cpp

HEADERS += \
    aboutpage.h \
    dateconverter.h \
    dbconnection.h \
    electronicdiary.h \
    gradecreateform.h \
    gradeservice.h \
    groupcreateform.h \
    groupservice.h \
    mainwindow.h \
    multiselectcombobox.h \
    studentcreateform.h \
    studentservice.h \
    subjectservice.h \
    userservice.h

FORMS += \
    aboutpage.ui \
    electronicdiary.ui \
    gradecreateform.ui \
    groupcreateform.ui \
    mainwindow.ui \
    studentcreateform.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    db-init.sql \
    el-diary.db

RESOURCES += \
    polinblin.qrc
