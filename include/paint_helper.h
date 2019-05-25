//Provides helper functions for paintEvent of GameWindow
#ifndef paint_helper_h
#define  paint_helper_h

#include <vector>
#include <string>

#include <QRect>
#include <QPoint>

enum class PlayerColor;

namespace painthelp {

    //Return the absolute rectangular area on screen of the cell by it's x and y cordinates
    QRect getCellRect(int x, int y);

    //Eqvi. to getCellRect(int, int) but uses QPoint as param instead
    QRect getCellRect(QPoint cell);

    //Returns the rectangular region covering the home of red player
    QRect getRedHomeRect();

    //Returns the rectangular region covering the home of yellow player
    QRect getYellowHomeRect();

    //Returns the rectangular region covering the home of blue player
    QRect getBlueHomeRect();

    //Returns the rectangular region covering the home of green player
    QRect getGreenHomeRect();

    //Returns the rectangular region as QRect covering the destination box
    QRect getDestRect();

    //Shifts the rect's corner to center of itself
    QRect shiftToCenter(QRect it);

    //Returns the vector of rects where white circles inside homes are to be drawn
    std::vector<QRect> getHomeCircleRects();

    //Returns geometry for pawns when at home
    QRect getPawnHomePosGeometry(PlayerColor color, int which);

    //Returns geometry for a pawn visual if placed on 'cellRect'
    QRect getPawnGeometry(QRect cellRect);

    //Returns geometry for a pawn visual if placed on cell (cell given as x and y)
    QRect getPawnGeometry(int x, int y);

    //Returns geometry for a pawn visual if placed on cell (cell given point on board)
    QRect getPawnGeometry(QPoint);

    //Returns the point adjecent to the given point, lieing below it
    QPoint pointBelow(QPoint p);

    //Returns the point adjecent to the given point, lieing right to it
    QPoint pointRight(QPoint p);

    //Returns the point adjecent to the given point, lieing above it
    QPoint pointAbove(QPoint p);

    //Returns the point adjecent to the given point, lieing left to it
    QPoint pointLeft(QPoint p);

    //Returns the QRect on the cell where guider dots are to be drawn
    QRect getGuiderRegion(QRect cell);

}

#endif
