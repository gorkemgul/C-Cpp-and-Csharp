#include <iostream>

int main(){

    /*
        Here, we're gonna look at how to use relational operators & explain their concept
    */

    // Let's start by creating two integers called firstNumber & secondNumber
    int firstNumber {10};
    int secondNumber {12};

    // Check if the first number is higher than the second one 
    std::cout << std::boolalpha;
    std::cout << "Is the first number higher than the second one? " << (firstNumber > secondNumber) << std::endl;
    // Note: Because of the precedence we must use paranthesis to run our program correctly
    // Note: In case we want our result as True & False, we need to use std::boolalpha

    // Check if the first number is lower than the second one 
    std::cout << "Is the first number lower than the second one? " << (firstNumber < secondNumber) << std::endl;

    // Check if the second number is higher than or equal to the first number
    std::cout << "Is the second number higher than or equal to the first number? " << (secondNumber >= firstNumber) << std::endl;

    // Check if the second number is lower than or equal to the first one
    std::cout << "Is the second number lower than or equal to the first number? " << (secondNumber <= firstNumber) << std::endl;

    // Check if they're equal
    std::cout << "Are they equal? " << (firstNumber == secondNumber) << std::endl;

    // Check if they're not equal
    std::cout << "Aren't they equal? " << (firstNumber != secondNumber) << std::endl;

    // We can store the result in a bool variable
    bool result = (firstNumber <= secondNumber);

    // Print the result out
    std::cout << "Is the first number lower than or equal to the second one? " << result << std::endl;
}