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
       
        Figure(int xPos, int yPos,Color clr);       //- ������������� ������ � ��������� ���������
        
        //void GetColor();                                    // Black � White
                                        //-� ������ ������ ���� �������������, ��� �� �����, ������� ����� �� ��� ����������
        void GetFigureId();                                       //-� ������ ������ ���� �������������, ��� �� �����, ������� ����� �� ��� ����������
        //SetCurrentCoordinates(xPos, yPos) {};
        
    private:
        int m_xPos;
        int m_yPos;
        Color m_color;
        int* m_id;
       
    };

