#include <iostream>

int main(){

    /*
        Here, we're going to cover the concept of break & continue
        Basically, break statement terminates the smallest enclosing loop and continue statement skips the rest of the loop statement and causes the next iteration of the loop to take place. 
    */

    // Define the iterator & the hyperparameter
    const size_t COUNT {20};
    size_t i {0};

    // Create a for loop with break statement
    for (; i < COUNT; ++i){
        if (i == 12) break; 
        std::cout << "The value of i is " << i << std::endl;
    }
    std::cout << "Loop is done!" << std::endl;

    // Create a for loop with continue statement
    for (size_t j {0}; j < COUNT; ++j){
        if (j == 13) continue;
        std::cout << "The value of j is " << j << std::endl;
    }
    std::cout << "Loop is done!" << std::endl;

    // Create a while loop with break statement
    size_t k {0};
    while (k < COUNT){
        if (k == 15) break;
        std::cout << "The value of k is " << k << std::endl;
        ++k;
    } 
    std::cout << "Loop is done!" << std::endl;

    // Create a while loop with continue statement 
    size_t l {0};
    while (l < COUNT){
        //if (l == 15) continue; // if using this statement like this, it causes an infinite while loop
        if (l == 15){
            ++l;
            continue;
        }
        std::cout << "The value of l is " << l << std::endl;
        ++l;
    }
    std::cout << "Loop is done!" << std::endl;

    // Create a do while loop with break statement
    size_t m {0};
    do{
        if (m == 12) break;
        std::cout << "The value of m is " << m << std::endl;
        ++m;
    } while(m < COUNT);
    std::cout << "Loop is done!" << std::endl;

    // Create a do while loop with continue statement
    size_t n {0};
    do{
        if (n == 5){
            ++n;
            continue;
        }
        std::cout << "The value of n is " << n << std::endl;
        ++n;
    } while(n < COUNT);
    std::cout << "Loop is done!" << std::endl;
}