#pragma once
#include "Figure.h"
/*class Horse  // ����������� �� Figure
{
	bool CanMoveToPosition(xPos, yPos) - ���������� true ���� ������ ������ ��� �������
};
*/
    class Horse : public Figure
    {
    public:
        Horse(int xPos, int yPos, Color clr);       
        bool CanMoveToPosition( int xPos,   int yPos);
    private:

    };
