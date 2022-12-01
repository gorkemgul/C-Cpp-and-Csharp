#include <iostream>

int main(){

    /*
        Here, we're gonna focus on the concept of infinite loops
    */

    // Create an infinite for loop
    for (size_t i {0}; true; ++i){
        std::cout << "The value of i is " << i << std::endl;
    }

    // Create an infinite while loop
    size_t j {0};
    
    while (true){
        std::cout << "The value of j is " << j << std::endl;
        ++j;
    }

    // Create an infinite do while loop
    size_t k {0};

    do{
        std::cout << "The value of k is " << k << std::endl;
        ++k;
    } while(true);
}