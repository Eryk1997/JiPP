TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    point2d.cpp \
    triangle.cpp \
    rectangle.cpp \
    circle.cpp \
    square.cpp

HEADERS += \
    point2d.h \
    triangle.h \
    rectangle.h \
    circle.h \
    square.h
