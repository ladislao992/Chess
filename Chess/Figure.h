#pragma once
#include<iostream>
/*class Figure
{
	Figure(xPos, yPos) - устанавливает фигуру в начальное положение
		Color GetColor()  // Black и White
		GetFigureId() - у каждой фигуры есть идентификатор, тип не важен, главное чтобы он 
		был уникальным
		SetCurrentCoordinates(xPos, yPos)
};*/
enum Clr {
    ClrError,    
    ClrWhite,
    ClrBlack
    };
   
    enum xPos {
        xPosError,A,B,C,D,E,F,G,H
    };
    
    class Figure {
    public:
        struct CurFigure {
            int xPos;
            int yPos;
            int id;
            Clr color;
        };
        Figure(int xPos, int yPos,Clr clr);      
        Clr GetColor()const;                               
        virtual bool CanMoveToPosition(int xPos, int yPos)=0;
        int GetFigureId() const;                                       //-у каждой фигуры есть идентификатор, тип не важен, главное чтобы он был уникальным
        //SetCurrentCoordinates(xPos, yPos);
        //virtual bool MoveToPosition(int xPos, int yPos)=0;

    protected: 
        int GetX(); 
        int GetY(); 
    private: 

        CurFigure m_element;
        
    };

    inline int Figure::GetX() { return m_element.xPos; }
    inline int Figure::GetY() { return m_element.yPos; }
