#include <iostream>

int main(){

    /*
        Here, we're gonna focus on the concept of If Constexpr
    */

    // Define a constexpr var to work with
    constexpr bool condition {false};

    // Create the If Constexpr
    if constexpr (condition){
        std::cout << "Passed!" << std::endl;
    } else{
        std::cout << "Could not pass!" << std::endl;
    }
}   