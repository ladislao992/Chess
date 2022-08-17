#pragma once
#include<iostream>
    enum Color {
        white,
        black
    };
        enum xPos {
        A = 1, B = 2, C = 3, D = 4, E = 5, F = 6, G = 7, H = 8
    };
        
    class Figure {
    public:
       
        Figure(int xPos, int yPos,Color clr);       //- устанавливает фигуру в начальное положение
        
        //void GetColor();                                    // Black и White
                                        //-у каждой фигуры есть идентификатор, тип не важен, главное чтобы он был уникальным
        void GetFigureId();                                       //-у каждой фигуры есть идентификатор, тип не важен, главное чтобы он был уникальным
        //SetCurrentCoordinates(xPos, yPos) {};
        virtual bool CanMoveToPosition(int xPos, int yPos)=0;
       protected:
        int GetX();
        int GetY();
    private:
        int m_xPos;
        int m_yPos;
        Color m_color;
        int* m_id=nullptr;
       
    };

    inline int Figure::GetX() { return m_xPos; }
    inline int Figure::GetY() { return m_yPos; }