TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.cpp \
    badcoordinates.cpp \
    cfile.cpp \
    circle.cpp \
    point.cpp \
    polygon.cpp \
    rectangle.cpp \
    square.cpp \
    triangle.cpp

SUBDIRS += \
    xx.pro

DISTFILES += \
    xx.pro.user

HEADERS += \
    badcoordinates.h \
    cfile.h \
    circle.h \
    drawable.h \
    point.h \
    polygon.h \
    rectangle.h \
    square.h \
    triangle.h
