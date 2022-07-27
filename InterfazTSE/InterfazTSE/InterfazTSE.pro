QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    activarmesas.cpp \
    comunicaciones.cpp \
    confirmarvoto.cpp \
    conteovotos.cpp \
    ingresarvotante.cpp \
    log.cpp \
    login.cpp \
    main.cpp \
    mainwindow.cpp \
    ventanadeerror.cpp \
    votar.cpp

HEADERS += \
    activarmesas.h \
    comunicaciones.h \
    confirmarvoto.h \
    conteovotos.h \
    ingresarvotante.h \
    log.h \
    login.h \
    mainwindow.h \
    ventanadeerror.h \
    votar.h

FORMS += \
    activarmesas.ui \
    confirmarvoto.ui \
    conteovotos.ui \
    ingresarvotante.ui \
    login.ui \
    mainwindow.ui \
    ventanadeerror.ui \
    votar.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resource.qrc
