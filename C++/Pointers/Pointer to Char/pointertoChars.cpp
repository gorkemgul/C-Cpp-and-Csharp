#include <iostream>

int main(){

    /*
        Here, we're gonna cover the concept of pointers to chars
    */

    // Define a char variable to work with
    char *singleCharP {nullptr};
    char singleChar {'A'};

    // Store its address
    singleCharP = &singleChar;

    // Print out the value of our char
    std::cout << "The value stored in is " << *singleCharP << std::endl;

    // Change the value of our char
    char singleChar2 {'B'};
    singleCharP = &singleChar2;

    // Print out the value of char after changing its value
    std::cout << "The value stored in is " << *singleCharP << std::endl;
    
    // Use the String literal
    const char *message {"Hello World!"};

    // Print out the whole message & the first char of its
    std::cout << "The message is: " << message << std::endl;
    std::cout << "The first char of the message is " << *message << std::endl;

    // Try to change the second char (it's gonna return a compiler error!)
    *message = "B"; 

    // To modify the string we can make it array and initialize it
    char messageArray []{"Hello World!"};
    messageArray[2] = 'B';
    std::cout << "The second char after changing it is " << messageArray[2] << std::endl;
} 