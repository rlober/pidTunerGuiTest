#-------------------------------------------------
#
# Project created by QtCreator 2015-05-15T19:47:13
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets printsupport

TARGET = pidTunerGuiTest
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    qcustomplot.cpp \
    testclass.cpp

HEADERS  += mainwindow.h \
    qcustomplot.h \
    testclass.h

FORMS    += mainwindow.ui
