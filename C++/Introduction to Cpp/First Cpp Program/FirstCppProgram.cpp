// Iostream defines the standart input/output stream objects
#include <iostream>

// Main function is the entry point of the executable programs
int main(){

    // Let's print "Hello World!" out as usual
    std::cout << "Hello World!" << std::endl;
    
    // Check the difference between writing std::endl & not writing it
    // Note: In case we do not use std::endl, It prints the string & does nothing else. On the other hand, if using "std::endl" prints the str & moves the cursor to a new line.
    std::cout << "Hello";
    std::cout << "World!";
    return 0;
}