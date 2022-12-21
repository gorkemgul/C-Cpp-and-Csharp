#include <iostream>

int main(){

    /*
        Here, we're gonna cover the concept of the array size
    */

    // Define an array 
    int scores [] {3, 4, 5, 6, 8, 10};

    // Loop through the array and print out the values of the elements
    for (size_t i {0}; i < 6; ++i){
        std::cout << scores[i] << std::endl;
    }

    // What if we add more values into our array (we can't use the same for loop because we won't be able to get all the values in our array)
    // Note: what we need to do is, we need to get the size of our array dynamically. To do so, we may create a variable called count and store array's size in it. 
    int scores2 [] {3, 4, 5, 6, 8, 10, 42};

    // for (size_t i {0}; i < 6; ++i){
    //     std::cout << scores2[i] << std::endl;
    // }

    // Define a variable to store the size of the array
    int count {std::size(scores2)};

    // Re-create the for loop
    for (size_t i {0}; i < count; ++i){
        std::cout << scores2[i] << std::endl;
    }

    // There is an old way of doing the same operation. The reason why I show this is, "std::size" came with C++17. But before that programmers used to use this way below. (Note that both way can be used!)
    std::cout << "The storage size of our array is " << sizeof(scores2) << std::endl;
    std::cout << "The storage size of the first element in our array is " << sizeof(scores2[0]) << std::endl;

    // We can get the size by doing divison operation
    int count2 {sizeof(scores2) / sizeof(scores2[0])};

    // Let's re-create our for loop to see if it works
    for (size_t j {0}; j < count2; ++j){
        std::cout << scores2[j] << std::endl;
    }

    // We've seen two ways do this operation but, there is a much easier way of doing the same operation by using range-based for loop. Let's look at that
    int scores3 [] {5, 12, 13, 8, 15, 17};

    for (auto l : scores3){
        std::cout << l << std::endl; 
    }
}