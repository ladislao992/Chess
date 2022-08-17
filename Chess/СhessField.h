#pragma once
/*class СhessField {
  СhessField() - расставляет фигуры в начальные позиции позиции
  bool Step(figureId, xPos, yPos) - делает шаг фигурой на определенную позицию. если фигура смогла так перейти - возвращает true иначе не перемещает и возвращает false
  ShowBoard() - выводит на экран доску с фигурами
};"*/
#include "Figure.h"
class СhessField
{
public:
	СhessField(int xPos, int yPos);

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

	