#ifndef Main1_H
#define Main1_H
#include<iostream>
#include "Draw.cpp"
#include "Enum.cpp"
#include "Square.cpp"
#include "Rectangle.cpp"
#include "Circle.cpp"
#include "Switch.cpp"

using namespace std;

int main()
{
    string shape;
    
    cout << "Enter a Shape" << endl;
    cin >> shape;

    Draw* shapeDrawer = selectShape(shape);

    if (shapeDrawer)
    {
        shapeDrawer->draw();
    }
    delete shapeDrawer;
}
#endif