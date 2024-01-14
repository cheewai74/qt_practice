TEMPLATE = app
TARGET = MyTest
QT = core gui
greaterThan(QT_MAJOR_VERSION, 5): QT += widgets

SOURCES += \
    main.cpp \
    mywidget.cpp \
    win_test.cpp

DISTFILES += \
    Reference \
    img/CPP_Concept.md \
    img/mytest.jpg

HEADERS += \
    mywidget.h \
    win_test.h
