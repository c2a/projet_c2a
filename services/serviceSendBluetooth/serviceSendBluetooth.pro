TEMPLATE = lib
CONFIG   += plugin

TARGET   = serviceSendBluetooth
DESTDIR += ./..

OBJECTS_DIR = ./../obj
MOC_DIR     = $$OBJECTS_DIR
DEPENDPATH  = $$OBJECTS_DIR


HEADERS     =  ./*.h

INCLUDEPATH += ./*.h
SOURCES     += ./*.cpp

QT          += core gui
