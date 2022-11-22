#include <iostream>

// Define a couple of functions to work with
bool firstFunc() {
    std::cout << "Running the first function" << std::endl;
    return true;
}

bool secondFunc() {
    std::cout << "Running the second function" << std::endl;
    return false;
}

bool thirdFunc(){
    std::cout << "Running the third function" << std::endl;
    return true;
}

bool fourthFunc(){
    std::cout << "Running the fourth function" << std::endl;
    return true;
}

bool fifthFunc(){
    std::cout << "Running the fifth function" << std::endl;
    return false;
}

bool sixthFunc(){
    std::cout << "Running the sixth function" << std::endl;
    return true;
}

bool seventhFunc(){
    std::cout << "Running the seventh function" << std::endl;
    return false;
}

bool eighthFunc(){
    std::cout << "Running the eighth function" << std::endl;
    return false;
}

int main(){

    /*
        Here, we're gonna focus on the concept of short circuit evaluations
        For more information visit: https://www.geeksforgeeks.org/short-circuiting-in-c-and-linux/
        
    */

    // Define a couple of bool variables 
    bool bool_A {true};
    bool bool_B {true};
    bool bool_C {true};
    bool bool_D {false};

    bool bool_P {false};
    bool bool_Q {false};
    bool bool_R {false};
    bool bool_M {true};

    // AND Short Circuit (if one of the operands is 0, the result is going to be 0)
    bool result = bool_A && bool_B && bool_C && bool_D;
    std::cout << "The value of result is " << std::boolalpha << result << std::endl;

    // OR Short Circuit  (if one of the operands is 1, the result is going to be 1)
    bool result2 = bool_P || bool_Q || bool_R || bool_M;
    std::cout << "The value of result2 is " << result2 << std::endl;
    
    // Another AND Short Circuit example
    if (firstFunc() && secondFunc() && thirdFunc() && fourthFunc()){
        std::cout << "Passed!" << std::endl;
    } else{
        std::cout << "Could not pass!" << std::endl;
    }
    // Note: By the time compiler hits false, it's gonna stop and jump else because it knows the result it's gonna be false anyway.

    // Another OR Short Circuit example
    if (fifthFunc() || sixthFunc() || seventhFunc() || eighthFunc()){
        std::cout << "Passed!" << std::endl;
    } else{
        std::cout << "Could not pass!" << std::endl;
    }
    // Note: By the time compiler hits true, it's gonna stop and print out "Passed!" because it knows the result it's gonna be true anyway.
}