#ifndef Square_cpp
#define Square_cpp

#include <iostream>

#include "Shape.cpp"

using namespace std;

class Square : public Shape  
// This class doesnot follows the Single Responsibility Principle .
//Responsibilities: 
// 1 . Drawing the shape .
// 2 . Taking user's input .
// 3 . Calculating the computable dimensions .

// This class follows the Open Closed Principle . 
// Reason: 
// In future if we want to add anyother dimensions or any other methods,
// we would not have to change the signature of the methods that we are using right now. 

{
    private:
        double length;
        
        double area;
        double volume;

    public:

        void draw() override
        {
            cout << "square" << endl;
        }

        void inputDimensions() override
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