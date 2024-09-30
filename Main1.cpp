#ifndef Main1_cpp
#define Main1_cpp
#include <iostream>
#include "Switch.cpp"
#include "Enum.cpp"
#include "Draw.cpp"
#include "Square.cpp"
#include "Rectangle.cpp"
#include "Circle.cpp"  

using namespace std;

int main()
{
    string shape;
    
    cout << "Enter a shape: ";
    cin >> shape;

    Draw* shapeDrawer = selectShape(shape); 

    if (shapeDrawer)
    {  
        shapeDrawer->drawShape();  
        delete shapeDrawer;        
    }
    else
    {
        cout << "No valid shape selected." << endl;
    }

    return 0;
}

#endif
