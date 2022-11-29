#include <iostream>

int main(){

    /*
        Here, we're gonna cover how to use multiple declarations with for loop
    */

    // Create a for loop
    for (size_t i {0}, x {5}, y {22}; y > 15; ++i, x += 5, y -= 1){
        std::cout << "The value of i is " << i << ", the value of x is " << x << " and, the value of y is " << y << std::endl;
    } 
    // Note: We can declare multiple values but they must have the same type

    // Create another for loop example
    size_t j {0}, k {25}, l{10};

    for (; k > 10; ++j, l += 10, k -= 1){
        std::cout << "The value of j is " << j << ", the value of k is " << k << " and, the value of l is " << l << std::endl;
    }
}