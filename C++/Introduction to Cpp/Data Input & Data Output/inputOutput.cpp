#include <iostream>
// String class is part of C++ library that supports a lot much functionality over C style strings
#include <string>

/*
    Here we're going to explain the other ways to get the data from our program to the console
          Stream | Purpose
    - std::cout -> Printing data to the console (terminal)
    - std::cin -> Reading data from the terminal
    - std::cerr -> Printing errors to the console
    - std::clog -> Printing log messages to the console 
*/

int main(){

    // Printing the data using "std::cout"
    std::cout << "Hello World!" << std::endl;

    // Create an integer & print it out using "std::cout"
    int Age {24};
    std::cout << "I'm " << Age << " years old." << std::endl;

    // Check how to use "std::cerr" & "std::log"
    std::cerr << "Error Message: Something went wrong!" << std::endl;
    std::clog << "Log Message: Something happend!" << std::endl; 

    // Define an integer & string called "Age" & "Name"
    int Age2;
    std::string Name;

    // Get the name of the user using "std::cin"
    std::cout << "Please type your name & age: " << std::endl;
    std::cin >> Name;
    std::cin >> Age2;

    // Another way of writing the same
    // std::cin >> Name >> Age;

    // Print the name of the user & the age of the user out
    std::cout << "Hello, My name is " << Name << " and I'm " << Age2 << " years old." << std::endl; 

    // In case we want to write the full name with a space like: Gorkem Gul, we must follow another way (std::getline())
    // Define necessary variables called "fullName" & "Age3"
    std::string fullName;
    int Age3;

    // Get the name of the user again
    std::cout << "Please type your name & age: " << std::endl;
    
    // Using "std::getline"
    std::getline(std::cin, fullName);
    
    // Get the full name & the age of the user
    std::cin >> Age3;

    // Print the full name & the age of the user
    std::cout << "Hello, My name is " << fullName << " and I'm " << Age3 << " years old." << std::endl;
}