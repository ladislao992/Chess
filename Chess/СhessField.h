#pragma once
/*class �hessField {
  �hessField() - ����������� ������ � ��������� ������� �������
  bool Step(figureId, xPos, yPos) - ������ ��� ������� �� ������������ �������. ���� ������ ������ ��� ������� - ���������� true ����� �� ���������� � ���������� false
  ShowBoard() - ������� �� ����� ����� � ��������
};"*/
#include "Figure.h"
class �hessField
{
public:
	�hessField(int xPos, int yPos);

	bool Step(int xPos, int yPos);
private:
	int m_xPos0 = 1;
	int m_yPos0 = 2;
	int m_xPos1 = 1;
	int m_yPos1 = 4;
	int m_xPos2 = 8;
	int m_yPos2 = 7;
	int m_xPos3 = 8;
	int m_yPos3 = 4;

};

	