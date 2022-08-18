#include "ÑhessField.h"


ChessField::ChessField()
//Hard the stock figure positions
{
	m_figureId1.xPos = B;
	m_figureId1.yPos = 1;
	m_figureId1.color=ClrWhite;
	m_figureId2.xPos = D;
	m_figureId2.yPos = 1;
	m_figureId2.color = ClrWhite;
	m_figureId3.xPos = G;
	m_figureId3.yPos = 8;
	m_figureId3.color = ClrBlack;
	m_figureId4.xPos = D;
	m_figureId4.yPos = 8;
	m_figureId4.color = ClrBlack;
	Horse el1(m_figureId1.xPos, m_figureId1.yPos, m_figureId1.color);
	King  el2(m_figureId2.xPos, m_figureId2.yPos, m_figureId2.color);
	Horse el3(m_figureId3.xPos, m_figureId3.yPos, m_figureId3.color);
	King  el4(m_figureId4.xPos, m_figureId4.yPos, m_figureId4.color);

}

void ChessField:: SetMovePos() {
	std::cout << "Enter 'Figure id' and after enter new pos with space beetwen";
	
	std::cin >> m_moveId;
	
	std::cin >> m_xPosToMove >> m_yPosToMove;
}
int ChessField::GetId()
{
	return m_figureId1.id;
}

bool ChessField::Step()
{
	SetMovePos();
	if (m_moveId == 1 || 3) {
	//bool King::CanMoveToPosition(m_xPosToMoves, m_yPosToMove)

}
	else {
	//bool Horse::CanMoveToPosition(m_xPosToMoves, m_yPosToMove)
	}
	 if(1){
	
		return true;
	}
	else
		return false;
	
}