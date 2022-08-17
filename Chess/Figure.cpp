#include "Figure.h"


Figure::Figure(int xPos, int yPos, Color clr):
	m_xPos(xPos),
	m_yPos(yPos),
	m_color(clr)
{

}
//- устанавливает фигуру в начальное положение
Color Figure::GetColor()
{
	return m_color;
	
};
// Black и White


/*void Figure::GetFigureId() {
	if (m_color == white && m_figureLevel == Horse) {
		m_id = 1;
	}
	if (m_color == white && m_figureLevel == King) {
		m_id = 2;
	}
	if (m_color == black && m_figureLevel == Horse) {
		m_id = 3;
	}
	if (m_color == black && m_figureLevel == King) {
		m_id = 4;
	}
}*/
