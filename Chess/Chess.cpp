#include <iostream>
#include "Figure.h"
#include "King.h"
#include "Horse.h"
#include "ÑhessField.h"

/*bool CanMoveThere(Figure* fig, int xPos, int yPos) {
	return fig->CanMoveToPosition(xPos, yPos);
}*/

int main()
{
	Horse el1(1, B, white);
	King el2(1, D, white);
	Horse el3(8, G, black);
	King el4(8, D, black);

	Color figEl1 = el1.GetColor();
	Color figEl2 = el2.GetColor();
	Color figEl3 = el3.GetColor();
	Color figEl4 = el4.GetColor();
	
	std::cout << "you lame, man";

}
