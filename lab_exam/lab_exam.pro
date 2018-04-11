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
    pointers.cpp \
    overloadoperators.cpp \
    copyconstructors.cpp \
    templates.cpp \
    stlgenericsalgorithms.cpp \
    polymorphism.cpp \
    references.cpp

LIBS    += -lncurses
