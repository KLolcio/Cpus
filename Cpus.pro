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
    Renderer.cpp \
    Cpu.cpp \
    Memory.cpp \
    LuaData.cpp

HEADERS  += app.h \
    include/Heders.h \
    include/Toolbar.h \
    include/Renderer.h \
    include/Cpu.h \
    include/Memory.h \
    include/LuaData.h


FORMS    += app.ui

OTHER_FILES += \
    README \
    config.lua

QT += opengl\


LIBS+= -llua5.1 -I lua-5.1/include/ -L lua-5.1/lib/ -lluabind

RESOURCES += \
    resources.qrc
