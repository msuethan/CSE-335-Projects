#-------------------------------------------------
#
# Project created by QtCreator 2016-03-27T13:57:22
# Inspired by/using as base: Alex Liu LectureObserverQT2
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Homework14
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    observerdialog.cpp \
    test.cpp \
    cart.cpp

HEADERS  += mainwindow.h \
    observerdialog.h \
    test.h \
    cart.h

FORMS    += mainwindow.ui \
    observerdialog.ui
