#include <iostream>

// Define a function to do a subtraction operation
int subNumbers(int firstNumber, int secondNumber){
    int result = firstNumber - secondNumber;
    return result;
}

int main(){

    // Define two integers called number1 & number2
    int number1 = 20;
    int number2 = 10;

    // Let's do the subtraction operation & assign its result to a variable called result
    int result = number1 - number2;

    // Print the result out
    std::cout << "The result of the subtraction is: " << result << std::endl;

    // Define the parameters of our subNumbers function by using uniform initialization of modern C++
    int firstNumber {20};
    int secondNumber {10};

    // Use the subNumbers function
    int result2 = subNumbers(firstNumber, secondNumber);
    
    // Demonstrate its result
    std::cout << "The result of the subtraction is: " << result2 << std::endl;

    // Let's re-use our function & show its result
    int result3 = subNumbers(30, 15);
    std::cout << "The result of the subtraction is: " << result3 << std::endl; 

    // Use our function but this time without having to store them
    std::cout << "The result of the subtraction is: " << subNumbers(10, 2);
}