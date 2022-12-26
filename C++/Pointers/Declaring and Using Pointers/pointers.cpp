#include <iostream>

int main(){

    /*
        Here, we're gonna focus on the concept of pointers
    */

    // Define an int & a double variable 
    int* number {}; // it will be initialized with nullptr automatically
    double* fractionalNum {}; 

    // We can directly initialize our variables with nullptr 
    int* number2 {nullptr};
    double* fractionalNum2 {nullptr};

    // All the pointers of different variables are carry the same size
    std::cout << "Storage size of int pointer is " << sizeof(int*) << std::endl;
    std::cout << "Storage size of double is " << sizeof(double*) << std::endl; 
    std::cout << "Storage size of number variable is " << sizeof(number) << std::endl;
    std::cout << "Storage size of fractional numbers is " << sizeof(fractionalNum) << std::endl;

    // Define an integer and initialize a pointer
    int number3 {42};
    int* pInt {&number3};

    // Print out the value and the address
    std::cout << "The value of number3 is " << number3 << std::endl;
    std::cout << "The address of number3 in memory is " << pInt << std::endl;

    // We can change the address stored in a pointer any time we want
    int number4 {13};
    pInt = &number4; 

    // Print out the adress of the pointer, after assigning a different adress
    std::cout << "The new adress in memory is " << pInt << std::endl;

    // We can't cross assign between pointers of different types 
    int* pInt2 {nullptr};
    double doubleNum {42};
    pInt2 = &doubleNum; // It's gonna return an error called "cannot convert 'double*' to 'int*' in assignment
    
    // Deferencing a pointer (read the value stored in adress)
    int* pInt3 {nullptr};
    int number5 {42};
    pInt3 = &number5; 

    // Print out the value stored in the adress
    std::cout << "The value in the adress is " << *pInt3 << std::endl;
}