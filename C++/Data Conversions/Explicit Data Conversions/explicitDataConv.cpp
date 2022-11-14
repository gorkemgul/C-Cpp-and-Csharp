#include <iostream>

int main(){
    
    /*
        Here, we're going to cover the concept of Explicit Data Conversions
        Explicit Data Conversion is also called type casting and it is user-defined. Here the user can typecast the result to make it of a particular data type.
        In C++, it can be done by two ways;
        - Conversion using Cast operator (static_cast<>)
        - Converting by assignment (old style C-cast)
    */

    // Define a couple of variables to work with
    double first_number {3.45};
    double second_number {6.80};
    int sum;

    // Let's look at how to use "static_cast<>" & check the value of sum
    sum = static_cast<int>(first_number) + static_cast<int>(second_number);
    std::cout << "The result of sum is " << sum << std::endl;

    // Let's do the same but this time sum up first and then cast (it's the same as implicit cast)
    int sum2 = static_cast<int>(first_number + second_number);
    std::cout << "The result of sum is " << sum2 << std::endl;

    // Let's look at how to use the second way (old style C-cast)
    double Pi {3.14};
    int intPi = (int)(Pi);
    
    // Check the values of both
    std::cout << "The value of Pi is " << Pi << std::endl;
    std::cout << "The value of Pi as int " << intPi << std::endl;
}