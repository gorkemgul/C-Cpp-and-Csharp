#include <iostream>

int main(){

    /*
        Here, we're going to cover the concept of while loop
    */

    // Define the iterator & the hyperparameter
    const size_t COUNT {13};
    size_t i {0};

    // Create the while loop
    while (i < COUNT){
        std::cout << "The value of i is " << i << std::endl;
        ++i;
    }

    // Create another while loop
    const size_t COUNT2 {0};
    size_t j {15};

    while (j > 0){
        std::cout << "The value of j is " << j << std::endl;
        j -= 1;
    } 
}