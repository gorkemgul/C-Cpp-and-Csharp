#include <iostream>

int main(){
    /*
        Here we're gonna focus on the types of errors by explaining them a bit. 
        - Compile Time Error
        - Runtime Error
        - Warnings 
    */

    // Compile time error example
    std::cout << "Hello World!" << std::endl
    return 0;

    // Runtime Error
    int result = 7/0;
    std::cout << "Result: " << result << std::endl;
    return 0;
}