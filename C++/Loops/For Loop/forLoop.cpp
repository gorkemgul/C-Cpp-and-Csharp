#include <iostream>

int main(){

    /*
        Here, we're gonna focus on the concept of for loop
        - size_t: a representation of some unsigned int for positive numbers
    */

    // Create a for loop
    for (unsigned int i{0}; i < 10; ++i){
        std::cout << "The value of i is " << i << std::endl; 
    }

    // Create another for loop 
    for (unsigned int i{0}; i < 100; ++i){
        std::cout << "Modern C++" << std::endl;
    } 
    
    // Let's look at how to use size_t in a for loop
    for (size_t i{0}; i < 10; ++i){
        std::cout << "Current value of i is " << i << std::endl; 
    }

    // Check the sizeof size_t
    std::cout << "The storage size of size_t is " << sizeof(size_t) << std::endl;

    // Create a for loop but this time define the iterator outside of the loop
    size_t j {0};

    for (j; j < 10; ++j){
        std::cout << "The value of j is " << j << std::endl;
    }

    // While creating a for loop, Iterator declaration part can be left out 
    size_t k {0};
    for (; k < 10; ++k){
        std::cout << "The value of k is " << k << std::endl;
    }

    // Do not hard code values!
    const size_t COUNT{10};
    for (size_t l {0}; l < COUNT; ++l){
        std::cout << "The value of l is " << l << std::endl;
    }
}