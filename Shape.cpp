#ifndef Shape_cpp
#define Shape_cpp

#include "Area.cpp"
#include "Volume.cpp"
#include "Input.cpp"

class Shape : public Area, public Volume, public Input 
// This class doesnot follows the Single Responsibility Principle .
//Responsibilities:
// 1 . To take user's input .
// 2 . To store and to calculate the computable dimensions . 
// 3 . Drawing the shape .

// This class doesnot follows the Open Closed Princple .
// Reason : Because of tight coupling 
// in other words if we want to draw a certain shape we must take user's input for calculating the dimensions.

{
    public:
        virtual void draw() = 0;
};
#endif