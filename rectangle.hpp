#include <iostream>
#include "shape.hpp"

class Rectangle : public Shape
{
    int width;
    int height;

public:
    Rectangle(int x, int y, int lrg, int lgr, col = 100) : Shape(posx, posy, col), width(lrg), height(lgr) {}
    // constructeur

    float area() const { 
        return width * height; 
        } 
        // aire rectangle

    float perimeter() const { 
        return (width * 2 + height * 2); 
        } 
        // perimètre rectangle
};