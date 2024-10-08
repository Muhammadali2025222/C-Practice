#ifndef ShapeFactory_H
#define ShapeFactory_H
#include <iostream>
#include "Enum.cpp"
#include "Draw.cpp"
#include "Square.cpp"
#include "Rectangle.cpp"
#include "Circle.cpp"

using namespace std;

class ShapeFactory {
    
    public: static Draw* selectShape(string shape)
    {
        Draw* shapeDrawer = nullptr;
        
        switch (fromStringtoEnum(shape))
        {
            case SQUARE:
            shapeDrawer = new Square();
            break;
            case RECTANGLE:
            shapeDrawer = new Rectangle();
            break;
            case CIRCLE:
            shapeDrawer = new Circle();
            break;
            case INVALID:
            cout << "Invalid shape input." << endl;
            break;
            default:
            break;
            }
            return shapeDrawer;
            }
};
#endif