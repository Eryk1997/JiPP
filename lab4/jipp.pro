TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    circle.cpp \
    main.cpp \
    point2d.cpp \
    rectangle.cpp \
    square.cpp \
    triangle.cpp

SUBDIRS += \
    jipp.pro

DISTFILES +=

HEADERS += \
    circle.h \
    point2d.h \
    polygon.h \
    rectangle.h \
    square.h \
    triangle.h \
    drawable.h
