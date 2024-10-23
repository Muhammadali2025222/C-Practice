#ifndef Rectangle_cpp
#define Rectangle_cpp

#include <iostream>
#include "Shape.cpp"
#include "Area.cpp"
#include "Input.cpp"

using namespace std;

class Rectangle :  public Shape , public Input
{
    private:
        int length = inputLength ();
        int width = inputWidth ();
        int area;

    public:
        void drawShape() override
        {
            cout << "rectangle" << endl;
        }
        int calculateArea() override
        {
            area = length * width;
            
            return area;
        }
};
#endif