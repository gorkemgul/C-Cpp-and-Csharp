#include <iostream>

int main(){

    /*
        Integral types less than 4 bytes in size do not support arithmetic operations. We're gonna explain them by showing some examples
    */

    // Let's look at the size of the short int & char by defining a couple of variables
    short int firstVar {15};
    short int secondVar {17};

    char thirdVar {10};
    char fourthVar {20};

    // Check the storage size of the variables we created
    std::cout << "The storage size of the first variable is " << sizeof(firstVar) << " bytes" << std::endl;
    std::cout << "The storage size of the second variable is " << sizeof(secondVar) << " bytes" << std::endl;
    std::cout << "The storage size of the third variable is " << sizeof(thirdVar) << " bytes" << std::endl;
    std::cout << "The storage size of the fourth variable is " << sizeof(fourthVar) << " bytes" << std::endl;

    // Let's try to do arithmetic operations to see the problem 
    auto result1 = firstVar + secondVar;
    auto result2 = thirdVar + fourthVar; 

    // Check the storage size of the results & see what it causes
    std::cout << "The storage size of result1 is " << sizeof(result1) << " bytes" << std::endl;
    std::cout << "The storage size of result2 is " << sizeof(result2) << " bytes" << std::endl;
    
    // Note: Just because integral types less than 4 bytes in size do not support arithmetic operations, result is going to be an integer which is the smallest type supported to do these arithmetic operations
}