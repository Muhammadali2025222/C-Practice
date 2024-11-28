#ifndef Square_cpp
#define Square_cpp

#include <iostream>
#include "Shape.cpp"
#include "Area.cpp"
#include "Volume.cpp"
#include "Input.cpp"

using namespace std;

class Square : public Shape  
//Responsibilities: 
// 1 . Drawing the shape .
// 2 . Taking user's input .
// 3 . Calculating the computable dimensions .

// This class doesnot follows the Single Responsibility Principle .  
// This class doesnot follows the Open Closed Principle .

{
    private:
        double length;
        
        double area;
        double volume;

    public:

        void drawShape() override
        {
            cout << "square" << endl;
        }

        void input() override
        {
            cout << "Enter Length" << endl;
            cin >> length;
        }

        double calculateArea() override
        {
            area = length * length;
            return area;
        }

        
        double calculateVolume() override
        {
            volume = length * length * length;
            return volume;
        }
};

#endif