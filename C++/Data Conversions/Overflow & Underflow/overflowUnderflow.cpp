#include <iostream>

int main(){

    /*
        Here, we're going to focus on the concept of overflow & underflow
        In short, overflow and underflow happen when we assign a value that is out of range of the declared data type of the variable
        If the absolute value is too big, we call it overflow, if the value is too small, we call it underflow
    */

    // Define a variable to work with
    unsigned char number {255};

    // Check what would happen if we increase the number (Example of overflow)
    ++number;
    std::cout << "The value of the number after incrementation is " << static_cast<int>(number) << std::endl; 
    // Note: Because the range of our value is between 0 & 255, it's now allowed to store a value higher than 255. Thus, after 255 it's gonna return to 0.

    // Create another variable to work with
    unsigned char number2 {0};
    
    // Check what would happen if we decrease the number (Example of underflow)
    --number2;
    std::cout << "The value of the number2 after decrementation is " << static_cast<int>(number2) << std::endl;
    // Note: Because Because the range of our value is between 0 & 255, it's not allowed to store a value lower than 0. Thus, after 0 it's gonna return to 255
}