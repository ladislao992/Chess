#pragma once
#include "Figure.h"
#include "King.h"
#include "Horse.h"
/*class �hessField {
  �hessField() - ����������� ������ � ��������� ������� �������
  "4 ���� �������� � ����������� ������ ������� � �����"
  bool Step(figureId, xPos, yPos) - ������ ��� ������� �� ������������ �������.
  ���� ������ ������ ��� ������� - ���������� true ����� �� ���������� � ���������� false
  "���������� � ������ � ��������� ��� ��� ����"
  ShowBoard() - ������� �� ����� ����� � ��������
};"

	figureId1.xPos = 1;
	figureId1.xPos = B;
	figureId1.color = ClrWhite;

	figureId2.xPos = 1;
	figureId2.xPos = D;
	figureId2.color = ClrWhite;

	figureId3.xPos = 8;
	figureId3.xPos = G;
	figureId1.color = ClrBlack;

	figureId4.xPos = 8;
	figureId4.xPos = D;
	figureId1.color = ClrBlack;*/
#include "Figure.h"
class ChessField 
{
public:
	
	ChessField();
	void SetMovePos();
	int GetId();

	bool Step();
private:

	Figure::CurFigure m_figureId1;
	Figure::CurFigure m_figureId2;
	Figure::CurFigure m_figureId3;
	Figure::CurFigure m_figureId4;
	int m_moveId;
	int m_xPosToMove;
	int m_yPosToMove;
	/*int* m_figureId2 = nullptr;
	int* m_figureId3 = nullptr;
	int* m_figureId4 = nullptr;*/
	

};

	