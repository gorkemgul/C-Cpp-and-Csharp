#include <iostream>

int main(){

    /*
        Here, we're gonna cover the concept of If Statement with Initializer
        It simplifies common code patterns and helps users keep scopes tight. Which in turn avoids variable leaking outside the scope.
    */

    // Define two variables to work with
    int speed {13};
    bool go {false};

    if (go){
        if (speed > 10){
            std::cout << "Slow Down!" << std::endl;
        } else{
            std::cout << "Nothing Wrong!" << std::endl;
        }
    } else{
        std::cout << "Stop!" << std::endl;
    }

    // Print the speed out
    std::cout << "The current speed is " << speed << std::endl;
    // Note: As we may see it's visible on the outside but we don't want it to be visible on the outside because we have no use for it there.

    // Let's look at how to use if statement with initializer (Note: We can't have more than one initializer)
    if (int actual_speed {13}; go){
        if (actual_speed > 10){
            std::cout << "Slow Down!" << std::endl;
        } else{
            std::cout << "Nothing Wrong!" << std::endl;
        }   
    } else{
        std::cout << "Stop!" << std::endl;
    }

    // Let's check if actual speed is visible on the outside or not 
    std::cout << "The current speed is " << actual_speed << std::endl;
}