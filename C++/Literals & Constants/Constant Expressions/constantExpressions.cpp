#include <iostream>

int main(){
    
    /*
        Here, we're going to explain the concept of the constant expressions
        The main idea of using constexpr is a performance improvement of programs by doing computations at compile time rather than run time
    */

    // Define a couple of constexpr variables to work with
    constexpr int number_of_students {20000};
    constexpr int number_of_classes {1000};
    constexpr float lib_version {1.23f};
    
    // Define an integer 
    int number_of_desks {50000};

    // Let's look at how to do compile time check 
    static_assert(lib_version == 1.23f);
    std::cout << "Passed!" << std::endl;

    // We're not allowed to do compile time check on non const variables
    static_assert(number_of_desks == 50000);

    // In case we want to do computations using non const & const variables it's going to return an error because non const variables are not known at compile time
    constexpr int totalNum {number_of_desks + number_of_classes};

    // We can not define an uninitialized constexpr variable 
    constexpr int a;
}