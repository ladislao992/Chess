#pragma once
#include "Figure.h"
    class Horse : public Figure
    {
    public:
        Horse(int xPos, int yPos, Color clr);
        // ����������� �� Figure 
        bool CanMoveToPosition( int xPos,   int yPos);     //-���������� true ���� ������ ������ ��� �������
    private:

    };
