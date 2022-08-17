#include "Figure.h"


Figure::Figure(int xPos, int yPos, Color clr):
	m_xPos(xPos),
	m_yPos(yPos),
	m_color(clr)
{
	
}
//- устанавливает фигуру в начальное положение
/*void Figure::GetColor()
{
	
};
// Black и White

void Figure::GetFigureId() {
	if (m_yPos == 1 && m_xPos == B || m_yPos == 8 && m_xPos == G) {
		m_figureType = Horse;		
	}
	if (m_yPos == 1 && m_xPos == D|| m_yPos == 8 && m_xPos == D) {
		m_figureType = King;
	}	
}*/
void Figure::GetFigureId() {
	int num=0;
	m_id = new int(++num);
}