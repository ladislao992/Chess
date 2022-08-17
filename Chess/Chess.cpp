/*"Реализовать игру шахматы. В игре у нас будут участвовать только 1 конь и король. Игроки делают ходы последовательно.
У нас будет базовый класс :
class Figure
{
	Figure(xPos, yPos) - устанавливает фигуру в начальное положение
		Color GetColor()  // Black и White
		GetFigureId() - у каждой фигуры есть идентификатор, тип не важен, главное чтобы он 
		был уникальным
		SetCurrentCoordinates(xPos, yPos)
};

class King  // наследуется от Figure
{
	bool CanMoveToPosition(xPos, yPos) - возвращает true если фигура смогла так перейти
};

class Horse  // наследуется от Figure
{
	bool CanMoveToPosition(xPos, yPos) - возвращает true если фигура смогла так перейти
};

class СhessField {
	СhessField() - расставляет фигуры в начальные позиции позиции
		bool Step(figureId, xPos, yPos) - делает шаг фигурой на определенную позицию.
		если фигура смогла так перейти - возвращает true иначе не перемещает и 
		возвращает false
		ShowBoard() - выводит на экран доску с фигурами
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
