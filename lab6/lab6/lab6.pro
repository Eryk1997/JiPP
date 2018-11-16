TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.cpp \
    ../cfile.cpp \
    ../circle.cpp \
    ../exception.cpp \
    ../point2d.cpp \
    ../rectangle.cpp \
    ../square.cpp \
    ../triangle.cpp

HEADERS += \
    ../cfile.h \
    ../circle.h \
    ../drawable.h \
    ../exception.h \
    ../point2d.h \
    ../polygon.h \
    ../rectangle.h \
    ../square.h \
    ../triangle.h
