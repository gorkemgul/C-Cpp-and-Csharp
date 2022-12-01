#include <iostream>

int main(){

    /*
        Here, we're going to focus on the concept of Do While Loop
        Do while loop, runs the body first then checks
    */

    // Define the hyperparameter & the iterator
    const size_t COUNT {15};
    unsigned int i {0};

    // Create a do while loop
    do{
        std::cout << "The value of i is " << i << std::endl;
        ++i;
    } while (i < COUNT);
}