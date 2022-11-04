#include <iostream>

int main(){
   
    /*
        Here, we're going to cover booleans & explain them a bit
    */
    
    // Define two variable of bool type called "redLight" & "greenLight"
    bool redLight {true};
    bool greenLight {false};

    // Let's create an if-else statement to use our bool variables
    if (redLight == true) {
        std::cout << "You must Stop!" << std::endl;
    } else {
        std::cout << "Go through!" << std::endl;
    }

    // Define another if-else statement to show another example
    if (greenLight) {
        std::cout << "The light is green!" << std::endl;
    } else {
        std::cout << "The light is NOT green!" << std::endl;
    }

    // Let's check the storage size of boolean takes up
    std::cout << "The storage size of bool is: " << sizeof(bool) << " bytes" << std::endl;

    // Lastly, Print the results of boolean variables out (If it's true returns 1, on the other hand if it's false it's gonna return 0 as output)
    std::cout << "The value of the Red Light is: " << redLight << std::endl; 
    std::cout << "The value of the Green Light is: " << greenLight << std::endl; 
    
    // In case we want to get the results in the exact format, we'd use "std::boolalpha" like below
    std::cout << std::boolalpha;
    std::cout << "The value of the Red Light is: " << redLight << std::endl; 
    std::cout << "The value of the Green Light is: " << greenLight << std::endl; 
}