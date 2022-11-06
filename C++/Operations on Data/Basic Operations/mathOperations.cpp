#include <iostream>

int main(){
    
    /*
        Here, we're going to focus on basic math operations like; addition, subtraction, division and so on.
    */

    // Let's start by creating three numbers to work with
    int firstNumber {10};
    int secondNumber {5};
    int thirdNumber {12};

    // Create a couple of examples for the Addition Operation 
    int result = firstNumber + secondNumber;
    int result2 {firstNumber + thirdNumber};

    // Demonstrate the results 
    std::cout << "The result of the first addition operation is " << result << std::endl;
    std::cout << "The result of the second addition operation is " << result2 << std::endl;

    // Create some examples for the Subtraction Operation
    int result3 {thirdNumber - firstNumber};
    int result4 = secondNumber - thirdNumber;

    // Illisturate the outputs 
    std::cout << "The result of the first subtraction operations is " << result3 << std::endl;
    std::cout << "The result of the second subtraction operation is " << result4 << std::endl;

    // Create a couple of examples for the Multiplication Operation
    int result5 = firstNumber * secondNumber;
    int result6 {thirdNumber * firstNumber};

    // Print the results out
    std::cout << "The result of the first multiplication operation is " << result5 << std::endl;
    std::cout << "The result of the second multiplication operation is " << result6 << std::endl;

    // Create a few examples for Division Operation 
    int result7 {firstNumber / secondNumber};
    int result8 = thirdNumber / secondNumber; // Because we're working with cpp, we're not gonna get a fractional number as a result

    // Demonstrate the outputs
    std::cout << "The result of the first division operation is " << result7 << std::endl;
    std::cout << "The result of the second division operation is " << result8 << std::endl;

    // We use modulus operator ("%") to be able to find the reminder 
    int result9 = thirdNumber % secondNumber;
    int result10 = firstNumber % secondNumber; 

    // Illustrate the outputs
    std::cout << "The reminder of the first operation is " << result9 << std::endl;
    std::cout << "The reminder of the second operation is " << result10 << std::endl;
}   