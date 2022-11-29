#include <iostream>

int main(){

    /*
        Here, we're gonna cover the concept of comma operator 
        The comma operator combines two or more expressions into a single expression where the value of the operation is the value of its right operand
    */

    // Define a couple of variables to work with
    int increment {5};
    int firstNum {10};
    int secondNum {12};
    int thirdNum {13};
    int result;

    result = (firstNum *= ++increment, secondNum - (++increment), thirdNum += ++increment);
    std::cout << "The value of the first number is " << firstNum << std::endl;
    std::cout << "The value of the second number is " << secondNum << std::endl;
    std::cout << "The value of the third number is " << thirdNum << std::endl;
    std::cout << "The value of result is " << result << std::endl;
    // Note: Result variable is gonna store the value of what it has in the last expression in this list of expressions.
}