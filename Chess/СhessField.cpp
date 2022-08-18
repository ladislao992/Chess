#include "ÑhessField.h"


ChessField::ChessField()
//Hard the stock figure positions
{
}

void ChessField:: SetMovePos() {
	std::cout << "Enter 'Figure id' and new pos with space beetwen";
	//std::cin >> id;
	std::cin >> m_xPosToMove >> m_yPosToMove;
}
bool ChessField::Step()
{
	SetMovePos();
	// King::CanMoveToPosition(m_xPosToMoves, m_yPosToMove)
	if (1) 
	{
		return true;
	}
	else
		return false;
	
}