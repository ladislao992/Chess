#pragma once
#include "Figure.h"

    class King : public Figure
    {
    public:
        King(int xPos, int yPos, Color clr);
        // наследуется от Figure 

        bool CanMoveToPosition( int xPos,  int yPos) override;               //-возвращает true если фигура смогла так перейти
    private:

    };

