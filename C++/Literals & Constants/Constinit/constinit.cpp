#include <iostream>

// Define a couple of variables 
const int firstNumber {6};
constexpr int secondNumber {8};
int thirdNumber {10};

constinit int fourthNumber {3};
// Const & constinit can be combined
const constinit int fifthNumber {4};
constinit int sixthNumber {firstNumber};

// Just because thirdNumber is evaluated at run time it's gonna return an error
constinit int seventhNumber {thirdNumber};

// Constexpr & constinit can't be combined 
constexpr constinit double eighthNumber {5};


int main(){

    /*
        Here, we're going to cover the concept of constinit
    */

    // We're not allowed to define a constinit variable in the main function
    constinit int number = 10;

    // Check to see the values of our variables
    std::cout << "The value of the First Number is " << firstNumber << std::endl;
    std::cout << "The value of the Second Number is " << secondNumber << std::endl;

    // We may change the value of constinit variable. It's not like others. By others, I mean const & constexpr
    std::cout << "The value of the Third Number is " << thirdNumber << std::endl;
    std::cout << "The value of the Fourth Number before changing it is " << fourthNumber << std::endl; 
    fourthNumber = 12;
    std::cout << "The value of the Fourth Number after changing it is " << fourthNumber << std::endl;

    // In case we combined const & constinit, we're not allowed to change its value
    // fifthNumber = 15;
    std::cout << "The value of the Fifth Number is " << fifthNumber << std::endl;
}