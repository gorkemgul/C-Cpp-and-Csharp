#include <iostream>

int main(){

    /*
        Here, we're going to focus on the concept of the logical operators & explain them a bit
    */

    // Define two boolean variables called boolVar1, boolVar2
    bool boolVar1 {true};
    bool boolVar2 {false};
    
    // Let's look at how to use logical operators 
    std::cout << std::boolalpha;
    std::cout << "The result of True and False is " << (boolVar1 && boolVar2) << std::endl;
    std::cout << "The result of True or False is " << (boolVar2 || boolVar1) << std::endl;
    std::cout << "The result of not True or False is " << !(boolVar1 || boolVar2) << std::endl; 

    // Define three integers called firstNumber, secondNumber & thirdNumber
    int firstNumber {6};
    int secondNumber {8};
    int thirdNumber {10};

    // Let's combine the relational operators & the logical operators
    std::cout << ((firstNumber < secondNumber) && (secondNumber > thirdNumber)) << std::endl; 
    std::cout << ((secondNumber < thirdNumber) && (firstNumber < thirdNumber)) << std::endl;
    std::cout << !((thirdNumber < firstNumber) || (secondNumber > firstNumber)) << std::endl;
    std::cout << ((secondNumber > thirdNumber) || (firstNumber > thirdNumber)) << std::endl;
    std::cout << (!(secondNumber > firstNumber) && boolVar1) << std::endl;
    std::cout << ((secondNumber == firstNumber) && (thirdNumber != secondNumber) || boolVar1) << std::endl;
}   