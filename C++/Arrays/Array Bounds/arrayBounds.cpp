#include <iostream>

int main(){

    /*
        Here, we're gonna cover the concept of array bounds
    */

    // Define an array
    int numbers [] {5, 12, 13, 8, 15, 17};

    // Although we do not have more than 6 elements in our array. Compiler allows us to read beyond bounds. (Be careful about this!)
    std::cout << numbers[8] << std::endl;

    // Note: Because we don't own the memory at index 8, our programs may modify it and our program may read bogus data at a later time. Or we can even corrupt data used by other parts of our program

    // Even though we do not have more than 6 elements in our array. Compiler also allows us to write beyond bounds. (Be cautious about this one either!)
    numbers[9999999] = 512;
    std::cout << numbers[9999999] << std::endl;

    // It's not gonna be printed because our program will be crashed after doing the second operation above
    std::cout << "Passed" << std::endl;
}