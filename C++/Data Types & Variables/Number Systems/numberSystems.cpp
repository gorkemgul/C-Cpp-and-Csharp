#include <iostream>

int main(){

    /*
        - Here, we're going to look at how to define the same number in different number systems
        - Number systems can be used depending on which one of them is convenient for us
    */

    // Decimal System 
    int firstNumber = 15;

    // Octal System
    int secondNumber = 017; 
    
    // Hexademical System
    int thirdNumber = 0x0F;

    // Binary System 
    int fourthNumber = 0b00001111;

    // Let's print them out & check the results
    std::cout << "The value of the First Number is: " << firstNumber << std::endl;
    std::cout << "The value of the Second Number is: " << secondNumber << std::endl;
    std::cout << "The value of the Third Number is: " << thirdNumber << std::endl;
    std::cout << "The value of the Fourth Number is: " << fourthNumber << std::endl;
}