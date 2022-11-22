#include <iostream>

int main(){

    /*
        Here, we're going to cover the concept of ternary operators 
        A ternary operator evaluates the test condition and executes a block of code based on the result of the condition.
        syntax: (condition ? expression1 : expression2;) 
        For more information: https://www.programiz.com/cpp-programming/ternary-operator
    */

    // Create an example of regular if-else statement 
    int max {};
    int a {35};
    int b {20};

    if (a > b){
        max = a;
    } else{
        max = b;
    }

    // Print the max value out
    std::cout << "The max value is " << max << std::endl;

    // Let's do the same example using ternary operator
    int max2 = (a > b)? a : b;   

    // Check the value of max2 
    std::cout << "The max value is " << max2 << std::endl;

    // In case, we want to do this one, we're gonna get an error like: operand types are incompatible! 
    // auto max3 = (a > b)? a : "Hello";
    // std::cout << max3 << std::endl;

    // Let's look at what would happen if we do this one
    auto max4 = (a < b)? a : 13.5f;
    std::cout << max4 << std::endl; 
    // Note: As we may see, Implicit conversion happend from int to float. Normally, it happens from float to int.
}