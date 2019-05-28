######################################################################
# Automatically generated by qmake (3.1) Sun May 5 10:10:03 2019
######################################################################

TEMPLATE = app
TARGET = QtLudo
INCLUDEPATH += . ./include
QT += widgets core
CONFIG += debug

# The following define makes your compiler warn you if you use any
# feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
#DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

# Input
RESOURCES += res/resources.qrc
FORMS += welcome.ui about.ui
HEADERS += include/Board.h include/PlayerColor.h include/Pawn.h include/Game.h include/GameWindow.h include/paint_helper.h include/Path.h include/Dice.h include/ValueError.h
SOURCES += Pawn.cpp Board.cpp Game.cpp GameWindow.cpp Main.cpp paint_helper.cpp Path.cpp Dice.cpp ValueError.cpp
