#include <iostream>

int main(){

    /*
        Here, we're going to focus on the concept of the compound assignment operators
    */

    // Define an integer called number
    int number {10};

    // Addition assignment 
    number += 5;

    // Check the new value of the number variable
    std::cout << "The new value after addition is " << number << std::endl;

    // Subtraction assignment
    number -= 10; 

    // Let's look at the new value of the number variable
    std::cout << "The new value after subtraction is " << number << std::endl;

    // Multiplication assignment 
    number *= 4; 

    // Check the new value of the number variable
    std::cout << "The new value after multiplication is " << number << std::endl;

    // Division assignment
    number /= 2; 

    // Demonstrate the new value of the number variable
    std::cout << "The new value after division is " << number << std::endl;

    // Reminder assignment
    number %= 5; 

    // Illustrate the new value of the number variable
    std::cout << "The reminder of the operation is " << number << std::endl;
}