#pragma once
#include "Figure.h"

    class King : public Figure
    {
    public:
        King(int xPos, int yPos, Color clr);
       
        bool CanMoveToPosition( int xPos,  int yPos) override;               //-���������� true ���� ������ ������ ��� �������
    private:

    };

