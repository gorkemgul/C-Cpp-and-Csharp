#include <iostream>

int main(){

    /*
        Here, we're going to explain & focus on the concepts of prefix increment/decrement & postfix increment/decrement
    */

    // Define a number to work with
    int number {10};
    
    // Postfix Increment/Decrement
    // Increment
    std::cout << "The value of the number is being incrementing is " << number++ << std::endl; 
    std::cout << "The new value of the number after inrementing is " << number << std::endl;

    // Change the value of the number to its old value
    number = 10;

    // Decrement
    std::cout << "The value of the number is being decrementing is " << number-- << std::endl;
    std::cout << "The new value of the number after decrementing is " << number << std::endl;

    // Create another number called number2
    int number2 {20};

    // Prefix Increment/Decrement
    // Increment
    std::cout << "The new value of the number after incrementing is " << ++number2 << std::endl;

    // Change the value of number2 to its old value
    number2 = 20;

    // Decrement 
    std::cout << "The new value of the number after decrementing is " << --number2 << std::endl;
}