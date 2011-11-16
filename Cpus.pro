#-------------------------------------------------
#
# Project created by QtCreator 2011-11-10T21:21:49
#
#-------------------------------------------------

QT       += core gui

TARGET = Cpus
TEMPLATE = app


SOURCES += main.cpp\
        app.cpp \
    app_tool.cpp \
    PrintSurf.cpp

HEADERS  += app.h \
    include/Heders.h \
    include/Toolbar.h \
    include/PrintSurf.h

FORMS    += app.ui

OTHER_FILES += \
    README

QT += opengl

RESOURCES += \
    resources.qrc
