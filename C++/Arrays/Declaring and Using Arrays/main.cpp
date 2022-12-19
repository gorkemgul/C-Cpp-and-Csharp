#include <iostream>

int main(){
    
    /* 
        Here, we're gonna cover the concept of arrays 
    */

    // Define an int array
    int scores [10];

    // Print out the first & the second element of the array 
    std::cout << "The value of the first element of the array is " << scores[0] << std::endl;
    std::cout << "The value of the second element of the array is " << scores[2] << std::endl;

    // Create a for loop to print out every element of our array
    for (size_t i {0}; i < 10; ++i){
        std::cout << scores[i] << std::endl;
    }

    // Change the values of some of the elements
    scores[0] =  5;
    scores[2] = 12;
    scores[5] = 13;

    // Print out the changed elements 
    std::cout << "The value of the zeroth element of the array is " << scores[0] << std::endl;
    std::cout << "The value of the second element of the array is " << scores[2] << std::endl;
    std::cout << "The value of the fifth element of the array is " << scores[5] << std::endl;

    // Create another array to work with
    int scores2 [10];

    // Change the values of the elements of our array by defining a for loop
    for (size_t i {0}; i < 10; ++i){
        scores2[i] = i * 10;
    }
    
    // Check the values of the elements of our array after changing them
    for (size_t j {0}; j < 10; ++j){
        std::cout << scores2[j] << std::endl;
    }

    // Define an array and initialize it simultaneously
    double scores3 [6] {5.12, 5.13, 8.15, 8.17, 6.8, 6.10};

    // Print out the values of the elements in our array
    for (size_t k {0}; k < 6; ++k){
        std::cout << scores3[k] << std::endl;
    }

    // Note: In case we define 7 elements but only initalize six of them, the one that we did not initialize will be initialized as 0 automatically.
    double scores4 [7] {5.12, 5.13, 8.15, 8.17, 6.8, 6.10};

    for (size_t k {0}; k < 7; ++k){
        std::cout << scores4[k] << std::endl;
    }

    // Define another array to work with
    int sizes [] {10, 20, 30, 40, 50, 60, 70};

    // Print out the values using range-based for loop
    for (auto value : sizes){
        std::cout << value << std::endl;
    }

    // Create a constant array (the values of the elements can not be changed!)
    const int scores5 [12] {5, 12, 13};

    // Try to change the value of second element of our constant array (it's gonna cause a compile error!)
    scores5[2] = 5;
}