#ifndef ShapeFactory_H
#define ShapeFactory_H

#include <iostream>

#include "Enum.cpp"
#include "ShapeManager.cpp"
#include "Square.cpp"
#include "Rectangle.cpp"
#include "Triangle.cpp"
#include "Circle.cpp"

using namespace std;

class ShapeFactory  // This class follows the Single Responsibility Principle. 
//This class has the responsibility to create a new object based on user input.
{

public:
    static ShapeManager *create(string shapeType)
    {
        ShapeManager *shapeHandler = nullptr;

        switch (fromStringtoEnum(shapeType))
        {
        case SQUARE:
            shapeHandler = new Square();
            break;

        case RECTANGLE:
            shapeHandler = new Rectangle();
            break;

        case CIRCLE:
            shapeHandler = new Circle();
            break;

        case TRIANGLE:
            shapeHandler = new Triangle();
            break;

        case INVALID:
            cout << "Invalid shape input." << endl;
            break;

        default:
            break;
        }

        return shapeHandler;
    }
};
#endif