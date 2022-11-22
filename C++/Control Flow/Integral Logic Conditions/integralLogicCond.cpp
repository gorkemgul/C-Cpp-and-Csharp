#include <iostream>


int main(){
    
    /*
        Here, we're gonna look at the concept of integral logic conditions
        Integral types can also be used as logical conditions (if the value is different from zero it's gonna be treated as true otherwise, it's gonna be treated as false)
    */  

    // Define the condition to work with
    int condition {0};

    // Prove that it's not a bool 
    std::cout << std::boolalpha;

    // Let's see if compiler can turn an integer into a boolean by creating an if-else statement
    if (condition){
        std::cout << condition << std::endl; 
    } else{
        std::cout << condition << std::endl;
    }

    // Anything different from 0 it's gonna be transformed as true & if it's zero it's gonna be transformed as false
    bool bool_condition = condition;

    // Re-create the if-else statement
    if (bool_condition){
        std::cout << bool_condition << std::endl;
    } else {
        std::cout << bool_condition << std::endl;
    }
}