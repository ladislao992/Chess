#pragma once
#include "Figure.h"
    class Horse : public Figure
    {
    public:
        Horse(int xPos, int yPos, Color clr);
        // наследуется от Figure 
        bool CanMoveToPosition( int xPos,   int yPos);     //-возвращает true если фигура смогла так перейти
    private:

    };
