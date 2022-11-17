#include <iostream>

// Define a global variable 
int globalVar {12};

// Define a function to work with
void randomFunc(){

    // Define a local variable (it can't be used in the main function because it's limited to the scope of this function)
    int localVar {13};

    // Global variables can be used in functions 
    std::cout << "The value of global variable is " << globalVar << std::endl;
}

int main(){

    /*
        Here, we're gonna cover the concept of scope
    */

    // Global variable can be used in main block as well
    std::cout << "The value of global variable is " << globalVar << std::endl;  
}