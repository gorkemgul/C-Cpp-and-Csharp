#include <iostream>

int main(){

    /*
        Here, we're gonna look at the concept of arrays of characters
    */  

    // Define an array of chars
    char message [5] {'H', 'e', 'l', 'l', 'o'};

    // Print out the array
    for (auto c : message){
        std::cout << c; // we do not use "std::endl" here because we want our chars printed close to each other
    }
    std::cout << std::endl;

    // Change the chars in our array
    message[2] = 'i';
    message[3] = 'i';

    // Print out the array after changing two chars
    for (auto c : message){
        std::cout << c; // we do not use "std::endl" here because we want our chars printed close to each other
    }
    std::cout << std::endl;

    // We can print out the char array without using a for loop, however, we're gonna get extra garbage chars at the end of our message
    std::cout << message << std::endl;

    // Note: To fix this problem our array need to be null terminated. Let's look at how to do it (the null char '\0')
    char message2 [5] {'H', 'o', 'l', 'a', '\0'};

    // Print out the char array
    std::cout << message2 << std::endl;

    // We can also do the same without adding the null char. But this time we need to create our array with an extra size. The extra slot will be filled with the null char automatically
    char message3 [6] {'H', 'e', 'l', 'l', 'o'};
    std::cout << message3 << std::endl;

    // Creating an array of chars (this is not safe, do not use it!)
    char message4 [] {'H', 'o', 'l', 'a'};
    std::cout << message4 << std::endl;

    // String literal (this one is also going to be null terminated automatically)
    char message5 [] {"Hello"};
    std::cout << message5 << std::endl;
}