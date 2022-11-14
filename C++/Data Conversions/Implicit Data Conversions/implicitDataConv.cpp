#include <iostream>

int main(){

    /*
        Here, we're going to focus on the concept of Implicit Data Conversions
        Implicit Data Conversion is also known as "automatic type conversion". It's done by the compiler on its own, without any external trigger from the use
        Note: Conversions happen from smaller types to bigger or larger types in memory size
    */

    // Define two variables to work with 
    double price {5.12};
    int unit {13};

    // Check what would happen if we combine integer to double
    double totalPrice = price * unit;

    // Demonstrate the result & check its storage size
    std::cout << "The total price has been calculated as " << totalPrice << "$" << std::endl;
    std::cout << "The storage size of total price is " << sizeof(totalPrice) << " bytes" << std::endl;

    // What would happen if we did not define the totalPrice variable as double 
    auto totalPrice2 = price * unit; 

    // Check the storage size of totalPrice2 to see if there's any difference 
    std::cout << "The storage size of total price is " << sizeof(totalPrice2) << " bytes" << std::endl;

    // Define two more variables to work with
    int number; 
    double number2 {6.80};
    number = number2;
    // Note: In case we want to do this assignment operations it's gonna cause an implicit narrowing conversion because number2 is going to be converted before the assignment operation
    std::cout << "The value of number after assignment is " << number << std::endl;
    std::cout << "The storage size of number is " << sizeof(number) << " bytes" << std::endl;
}