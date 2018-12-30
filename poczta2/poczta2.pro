TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    exceptions.cpp \
    client.cpp \
    postoffice.cpp \
    ipostoffice.cpp

HEADERS += \
    exceptions.h \
    iclient.h \
    ipostoffice.h \
    client.h \
    postoffice.h

