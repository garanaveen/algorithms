#-------------------------------------------------
#
# Project created by QtCreator 2019-01-18T12:05:37
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = RomanNumerals
TEMPLATE = app

#QMAKE_CXXFLAGS += -std=c++11
CONFIG += c++11

SOURCES += main.cpp\
        mainwindow.cpp \
    roman.cpp

HEADERS  += mainwindow.h \
    roman.h
