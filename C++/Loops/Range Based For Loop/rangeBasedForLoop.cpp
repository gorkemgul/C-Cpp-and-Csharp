#include <iostream>

int main(){

    /*
        Here, we're gonna cover the concept of Range Based For Loop
    */

    // Define an array
    int values [] {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // Create a range based for loop
    for (int value : values){
        std::cout << value << std::endl;
    }

    // We could define the same loop using another way (specify the collection in place)
    for (int value : {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}){
        std::cout << value << std::endl;
    }

    // We can also use auto type deduction 
    for (auto value : {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}){
        std::cout << value << std::endl;
    }
}