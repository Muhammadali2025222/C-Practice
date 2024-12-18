#ifndef Triangle_cpp
#define Triangle_cpp

#include <iostream>

#include "Shape.cpp"

using namespace std;

class Triangle : public Shape 
//This class doesnot follows the Single Responsibility Principle .  
//Responsibilities:
// 1 . Drawing the shape .
// 2 . Taking user's input .
// 3 . Calculating the computable dimensions .

// The Interface Segregation Principle will not be applied to this class .
//Reason :
// Because the class itself is a concrete class 
// and Interface Segregation Principle only applies to interfaces or abstract classes .


{
    private:
        double base;
        double height;
        double length;

        double area;
        double volume;

    public:
        
        void draw() override
        {
            cout << "triangle" << endl;
        }

        void inputDimensions() override
        {
            cout << "Enter base" << endl;
            cin >> base;
            cout << "Enter height" << endl;
            cin >> height;
            cout << "Enter length" << endl;
            cin >> length;
        }

        double calculateArea() override
        {
            area = (base * height)/2;
            return area;
        }

         double calculateVolume() override
        {
            volume = (base * height * length)/2;
            return volume;
        }
};
#endif