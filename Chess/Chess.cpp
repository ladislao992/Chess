/*"����������� ���� �������. � ���� � ��� ����� ����������� ������ 1 ���� � ������. ������ ������ ���� ���������������.
� ��� ����� ������� ����� :
class Figure
{
	Figure(xPos, yPos) - ������������� ������ � ��������� ���������
		Color GetColor()  // Black � White
		GetFigureId() - � ������ ������ ���� �������������, ��� �� �����, ������� ����� �� 
		��� ����������
		SetCurrentCoordinates(xPos, yPos)
};

class King  // ����������� �� Figure
{
	bool CanMoveToPosition(xPos, yPos) - ���������� true ���� ������ ������ ��� �������
};

class Horse  // ����������� �� Figure
{
	bool CanMoveToPosition(xPos, yPos) - ���������� true ���� ������ ������ ��� �������
};

class �hessField {
	�hessField() - ����������� ������ � ��������� ������� �������
		bool Step(figureId, xPos, yPos) - ������ ��� ������� �� ������������ �������.
		���� ������ ������ ��� ������� - ���������� true ����� �� ���������� � 
		���������� false
		ShowBoard() - ������� �� ����� ����� � ��������
}; "*/

#include <iostream>
#include "Figure.h"
#include "King.h"
#include "Horse.h"
bool CanMoveThere(Figure* fig, int xPos, int yPos) {
	return fig->CanMoveToPosition(xPos, yPos);
}

int main()
{
	Horse el1( 1, B, white);
	King el2( 1, D, white );
	Horse el3( 8, G, black );
	King el4( 8, D, black );

	el1.GetFigureId();
	el2.GetFigureId();
	el3.GetFigureId();
	el4.GetFigureId();
	
	
	
	std::cout << "you lame";

}
