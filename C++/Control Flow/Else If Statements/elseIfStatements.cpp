#include <iostream>

// Define a couple of variables to work with (tools)
const int Pen {10};
const int Marker {20};
const int Eraser {30};
const int Rectangle {40};
const int Circle {50};
const int Ellipse {60};
    
    
int main(){

    /*
        Here, we're gonna focus on the concept of else if statements by doing an example
    */

    // Define a variable to assign a tool 
    int tool {Circle};

    // Test the tool
    if (tool == Pen){
        std::cout << "The active tool is Pen!" << std::endl;
    }
    else if (tool == Marker){
        std::cout << "The active tool is Marker!" << std::endl;
    }
    else if (tool == Eraser){
        std::cout << "The active tool is Eraser!" << std::endl;
    }
    else if (tool == Rectangle){
        std::cout << "The active tool is Rectangle!" << std::endl;
    }
    else if (tool == Circle){
        std::cout << "The active tool is Circle!" << std::endl; 
    }
    else if (tool == Ellipse){
        std::cout << "The active tool is Ellipse!" << std::endl;
    }
}