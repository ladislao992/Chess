#include "King.h"

bool King::CanMoveToPosition( int xPos,  int yPos) {
    if (xPos <= 0 || xPos > 8 || yPos > 8 || yPos <= 0) {
        std::cout << "Desk have 8*8 coordinates max.";
        return false;
    }


    int resX = 0;
    int resY = 0;
    resX = abs(xPos - 0/*m_xPos */);
    resY = abs(yPos - 0/*m_yPos */);
    if (resX == 1 && resY == 0 || resX == 0 && resY == 1||
        resX == 1 && resY == 1 || resX == 1 && resY == 1) {

        return true;

    }
    else

        return false;

}