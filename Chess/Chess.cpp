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

int main()
{
	Horse::Figure el1( 1, B, white);
	King::Figure el2( 1, D, white );
	Horse::Figure el3( 8, G, black );
	King::Figure el4( 8, D, black );

	el1.GetFigureId();
	el2.GetFigureId();
	el3.GetFigureId();
	el4.GetFigureId();
	
	
	
	std::cout << "you lame";

}
