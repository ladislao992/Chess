#include "Figure.h"


Figure::Figure(int xPos, int yPos, Color clr):
	m_xPos(xPos),
	m_yPos(yPos),
	m_color(clr)
{

}

Color Figure::GetColor()
{
	return m_color;
	
};



