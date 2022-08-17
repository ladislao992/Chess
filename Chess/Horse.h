#pragma once
#include "Figure.h"
    class Horse : public Figure
    {

        // наследуется от Figure 
    public:
        bool CanMoveToPosition( int xPos,   int yPos);               //-возвращает true если фигура смогла так перейти
    private:

    };
