#include <iostream>

int main(){
    /*
        Here, we're gonna check Types of Variable Initializations. They're called as follows:
        - Variable Braced Initialization
        - Functional Variable Initialization
        - Assignment Initialization

        Indeed, we're gonna check how to use sizeof function
    */ 

    // Variable Braced Initialization
    int number_of_oranges; // Initializes to one
    int number_of_apples {}; // Initializes to zero
    int number_of_cats {10};
    int number_of_birds {20};

    // It can use expression as initializer. 
    int total_number_of_animals {number_of_cats + number_of_birds};

    // Print the results out 
    std::cout << "The are " << number_of_oranges << " oranges" << std::endl;
    std::cout << "There are " << number_of_apples << " apples" << std::endl;
    std::cout << "There are " << number_of_cats << " cats" << std::endl;
    std::cout << "There are " << number_of_birds << " birds" << std::endl;
    std::cout << "There are " << total_number_of_animals << " animals" << std::endl;

    // Can't be compiled in case of it takes undeclared variables in the braces
    // int total_number_of_devices {number_of_phones + number_of_computers};

    // Functional Variable Initialization
    int number_of_schools (10);
    int number_of_apartments (20);
    int total_number_of_buildings (number_of_schools + number_of_apartments);

    // Assignment Initialization (traditional one)
    int number_of_trucks = 5;
    int number_of_children = 12;
    int number_of_classes = 22;

    // Check the results
    std::cout << "There are " << number_of_schools << " schools" << std::endl;
    std::cout << "There are " << number_of_apartments << " apartments" << std::endl;
    std::cout << "There are " << total_number_of_buildings << " buildings" << std::endl;
    std::cout << "There are " << number_of_trucks << " trucks" << std::endl;
    std::cout << "There are " << number_of_children << " children" << std::endl;
    std::cout << "There are " << number_of_classes << " classes" << std::endl;

    // Let's look at how to use sizeof function by checking storage size of every data types in Cpp
    std::cout << "Size of char " << sizeof(char) << std::endl;
    std::cout << "Size of int: " << sizeof(int) << std::endl;
    std::cout << "Size of short int: " << sizeof(short int) << std::endl;
    std::cout << "Size of long int: " << sizeof(long int) << std::endl;
    std::cout << "Size of float: " << sizeof(float) << std::endl;
    std::cout << "Size of double: " << sizeof(double) << std::endl;
    std::cout << "Size of wchar_t: " << sizeof(wchar_t) << std::endl;
}