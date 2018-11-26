TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.cpp \
    circle.cpp \
    point.cpp \
    polygon.cpp \
    rectangle.cpp \
    square.cpp \
    triangle.cpp \
    badcoordinates.cpp \
    cfile.cpp

HEADERS += \
    circle.h \
    point.h \
    polygon.h \
    rectangle.h \
    square.h \
    triangle.h \
    drawable.h \
    badcoordinates.h \
    cfile.h
