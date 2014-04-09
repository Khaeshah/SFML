TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += src/main.cpp src/Game.cpp
 
HEADERS += src/Game.h src/StringHelpers.hpp

LIBS += -lsfml-graphics -lsfml-window -lsfml-audio -lsfml-network -lsfml-system
