QT += core gui sql printsupport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets sql printsupport

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
    groupdeleteform.cpp \
    groupservice.cpp \
    main.cpp \
    electronicdiary.cpp \
    mainwindow.cpp \
    multiselectcombobox.cpp \
    studentcreateform.cpp \
    studentdeleteform.cpp \
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
    groupdeleteform.h \
    groupservice.h \
    mainwindow.h \
    multiselectcombobox.h \
    studentcreateform.h \
    studentdeleteform.h \
    studentservice.h \
    subjectservice.h \
    userservice.h

FORMS += \
    aboutpage.ui \
    electronicdiary.ui \
    gradecreateform.ui \
    groupcreateform.ui \
    groupdeleteform.ui \
    mainwindow.ui \
    studentcreateform.ui \
    studentdeleteform.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

# QXlsx code for Application Qt project
QXLSX_PARENTPATH=./         # current QXlsx path is . (. means curret directory)
QXLSX_HEADERPATH=./header/  # current QXlsx header path is ./header/
QXLSX_SOURCEPATH=./source/  # current QXlsx source path is ./source/
include(./QXlsx.pri)

DISTFILES += \
    ../Downloads/back_4.JPEG \
    db-init.sql \
    el-diary.db

RESOURCES += \
    polinblin.qrc
