#include <iostream>

// Define the same tools we defined before
const int Pen {10};
const int Marker {20};
const int Eraser {30};
const int Rectangle {40};
const int Circle {50};
const int Ellipse {60};


int main(){

    /*
        Here, we're gonna cover the concept of swich statement with initializer
    */

    // Define a variable to work with 
    int tool {Eraser};

    switch (double strength {5.12}; tool) {

        case Pen: {
            std::cout << "The active tool is Pen & the strength is " << strength << std::endl;
        }
        break;

        case Marker: {
            std::cout << "The active tool is Marker & the strength is " << strength << std::endl;
        } 
        break;

        case Eraser: {
            std::cout << "The active tool is Eraser & the strength is " << strength << std::endl;
        }
        break;

        case Rectangle: {
            std::cout << "The active tool is Rectangle & the strength is " << strength << std::endl;
        } 
        break;    

        case Circle: {
            std::cout << "The active tool is Circle & the strength is " << strength << std::endl;
        } 
        break;

        case Ellipse: {
            std::cout << "The active tool is Ellipse & the strength is " << strength << std::endl;
        } 
        break;

        default: {
            std::cout << "Couldn't find any tool" << std::endl;
        }
        break;    
    }

    // Check if the strength variable is accessable on the outside
    std::cout << "The active strength is " << strength << std::endl;
}