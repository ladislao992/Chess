#include <iostream>
#include "Figure.h"
#include "King.h"
#include "Horse.h"
#include "?hessField.h"

/*bool CanMoveThere(Figure* fig, int xPos, int yPos) {
	return fig->CanMoveToPosition(xPos, yPos);
}*/

int main()
{
	ChessField a;

	while (true) {
		if (a.Step())
			std::cout << "Success" << std::endl;
		else {
			std::cout << "Falce move" << std::endl;
		}
	}

	std::cout << "you lame, man";
	 
}
