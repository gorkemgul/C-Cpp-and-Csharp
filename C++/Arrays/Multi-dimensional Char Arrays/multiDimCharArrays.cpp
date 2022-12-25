#include <iostream>

int main(){

    /*
        Here, we're gonna cover the concept of multi dimensional char arrays
    */

    // Define a two dimensional char array
    const size_t nameLength {15};

    char names [][nameLength]{
        {'G', 'o', 'r', 'k', 'e', 'm'},
        {'R', 'e', 'c', 'e', 'p'},
        {'A', 'l', 'i'},
        {'A', 'h', 'm', 'e', 't'}
    };

    // Print out the names in our array (this is unsafe!)
    for (size_t i{0}; i < std::size(names); ++i){
        std::cout << names[i] << std::endl;
    }
    // Note: The reason why this is unsafe is, it may go over and print outside our valid memory block until terminating null char is encountered.

    // Print out all the chars in our array by looping around
    for (size_t j{0}; j < std::size(names); ++j){
        for (size_t k{0}; k < std::size(names[j]); ++k){
            std::cout << names[j][k];
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;

    // Generally, there is a much better way to define multi-dim char arrays. Let's look at that (C string literals)
    char names2 [][nameLength]{
        "Gorkem",
        "Recep",
        "Ali",
        "Ahmet"
    };

    // Print out the array called names2
    for (size_t i{0}; i < std::size(names2); ++i){
        for (size_t j{0}; j < std::size(names2[i]); ++j){
            std::cout << names2[i][j];
        }
        std::cout << std::endl;
    }
}