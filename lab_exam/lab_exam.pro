TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    arrays.cpp \
    misc.cpp \
    tui.cpp \
    fileio.cpp \
    inheritance.cpp \
    pointers.cpp

LIBS    += -lncurses
