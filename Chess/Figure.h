#pragma once
#include<iostream>
/*class Figure
{
	Figure(xPos, yPos) - ������������� ������ � ��������� ���������
		Color GetColor()  // Black � White
		GetFigureId() - � ������ ������ ���� �������������, ��� �� �����, ������� ����� �� 
		��� ����������
		SetCurrentCoordinates(xPos, yPos)
};*/
enum Color {
        white,
        black
    };
   
    enum xPos {
        A = 1, B = 2, C = 3, D = 4, E = 5, F = 6, G = 7, H = 8
    };
        
    class Figure {
    public:
       
        Figure(int xPos, int yPos,Color clr);      
        Color GetColor();                               
        virtual bool CanMoveToPosition(int xPos, int yPos)=0;
        // void GetFigureId();                                       //-� ������ ������ ���� �������������, ��� �� �����, ������� ����� �� ��� ����������
        //SetCurrentCoordinates(xPos, yPos);
        //virtual bool MoveToPosition(int xPos, int yPos)=0;

    protected:
        int GetX();
        int GetY();
    private:
        int m_xPos;
        int m_yPos;
        Color m_color;
       
        int m_id;
       
    };

    inline int Figure::GetX() { return m_xPos; }
    inline int Figure::GetY() { return m_yPos; }
