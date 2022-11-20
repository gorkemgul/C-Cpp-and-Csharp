#include <iostream>

int main(){

    /*
        Here, we're going to focus on the concept of if statements
    */

    // Define two variables to work with
    int firstNumber {12};
    int secondNumber {13};

    // Define a condition using our variables & store its result in a variable called result
    bool result = {firstNumber < secondNumber};

    // Check if the result is true
    if (result == true){
        std::cout << firstNumber << " is less than " << secondNumber << std::endl;
    }

    // Check if the result is not true (false)
    if (!(result == true)){
        std::cout << firstNumber << " is not less than " << secondNumber << std::endl;
    }

    // Alternative way of creating the same if statement
    if (result == true){
        std::cout << firstNumber << " is less than " << secondNumber << std::endl;
    } else{
        std::cout << firstNumber << " is not less than " << secondNumber << std::endl;
    }

    // Create a if statement but this time use the condition directly 
    if (firstNumber > secondNumber){
        std::cout << firstNumber << " is higher than " << secondNumber << std::endl;
    } else{
        std::cout << firstNumber << " is not higher than " << secondNumber << std::endl;
    }

    // Define a couple of bool variables to work with
    bool redLight {false};
    bool greenLight {true};
    bool yellowLight {false};
    bool policeStop {true};

    // Create some if statements 
    if (redLight){
        std::cout << "Stop!" << std::endl;
    }

    if (yellowLight){
        std::cout << "Get Ready!" << std::endl;
    }

    if (greenLight){
        std::cout << "Go!" << std::endl;
    }

    // Create a nested if statement 
    if (greenLight){
        if (policeStop){
            std::cout << "Stop!" << std::endl;
        } else{
            std::cout << "Go!" << std::endl;
        }
    }

    // An alternative & better way of creating the same if statement (without nested if)
    if (greenLight && !policeStop) {
        std::cout << "Go!" << std::endl;
    } else{
        std::cout << "Stop!" << std::endl;
    }
}