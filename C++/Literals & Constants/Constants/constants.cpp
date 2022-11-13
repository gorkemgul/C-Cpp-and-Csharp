#include <iostream>

int main(){

    /*
        Here, we're going to cover the concept of the constants
        The reason why we use const is, we guarantee that the variable will never be changed throughout the lifetime
    */

    // Define a couple of const variables to work with
    const int age {25};
    const float height {1.75f};
    const int a {15};
    const int b {50};

    // In case we try to change their values we're gonna get an error
    age = 42;
    height = 1.88f;

    // If we try to define an uninitialized var using const, we also get an error
    const int weight;

    // Constants can be involved in other computations
    int years {15 + a + b};
}