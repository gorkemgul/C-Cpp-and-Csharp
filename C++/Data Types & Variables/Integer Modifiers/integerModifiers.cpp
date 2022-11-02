#include <iostream>

int main(){
    
    /*
        Here, we're gonna check & explain a bit of the concept of Integer Modifiers
    */
    
    // Define a couple of integers using signed & unsigned and see the difference between them
    signed int number1 {5};
    signed int number2 {-5};
    unsigned int number3 {8};
    // unsigned int number4 {-8}; // If we try to compile this it's gonna return an error because usigned can only be used with positive numbers

    // Check the storage size of signed & unsigned integers
    std::cout << "The storage size of number1 is: " << sizeof(number1) << std::endl;
    std::cout << "The storage size of number3 is: " << sizeof(number3) << std::endl; 

    // Let's look at how to store short & long integers
    // Short
    short shortVar {5};
    short int shortNumber {10};
    signed short signedShortVar {153};
    signed short int signedShortNumber {-1234};
    unsigned short int unsignedShortNumber {1234};
    // Long
    long longVar {12};
    long int longNumber {13};
    signed long signedLongVar {-255};
    signed long int signedLongNumber {-158};
    unsigned long int unsignedLongNumber {1998};
    // Long Long
    long long llongVar {1998};
    long long int llongNumber {2022};
    signed long long signedLLongVar {2072};
    signed long long int signedLLongNumber {2000};
    unsigned long long int unsignedLLongNumber {2005};

    // Let's print the values & storage sizes of our variables
    // Short (2 Bytes)
    std::cout << "The value of Short Variable is: " << shortVar << ", The storage size of Short Variable is: " << sizeof(shortVar) << " bytes" << std::endl;
    std::cout << "The value of Short Int is: " << shortNumber << ", The storage size of Short Int is: " << sizeof(shortNumber) << " bytes" << std::endl;
    std::cout << "The value of Signed Short Variable is: " << signedShortVar << ", The storage size of Signed Short Variable is: " << sizeof(signedShortVar) << " bytes" << std::endl;
    std::cout << "The value of Signed Short Int is: " << signedShortNumber << ", The storage size of Signed Short Int is: " << sizeof(signedShortNumber) << " bytes" << std::endl;
    std::cout << "The value of Unsigned Short Int is: " << unsignedShortNumber << ", The storage size of Unsigned Short Int is: " << sizeof(unsignedShortNumber) << " bytes" << std::endl;
    // Long (4 Bytes)
    std::cout << "The value of Long Variable is: " << longVar << ", The storage size of Long Variable is: " << sizeof(longVar) << " bytes" << std::endl;
    std::cout << "The value of Long Int is: " << longNumber << ", The storage size of Long Int is: " << sizeof(longNumber) << " bytes" << std::endl;
    std::cout << "The value of Signed Long Variable is: " << signedLongVar << ", The storage size of Signed Long Variable is: " << sizeof(signedLongVar) << " bytes" << std::endl;
    std::cout << "The value of Signed Long Int is: " << signedLongNumber << ", The storage size of Signed Long Int is: " << sizeof(signedLongNumber) << " bytes" << std::endl;
    std::cout << "The value of Unsigned Long Int is: " << unsignedLongNumber << ", The storage size of Unsigned Long Int is: " << sizeof(unsignedLongNumber) << " bytes" << std::endl;
    // Long Long (8 Bytes)
    std::cout << "The value of Long Long Variable is: " << llongVar << ", The storage size of Long Long Variable is: " << sizeof(llongVar) << " bytes" << std::endl;
    std::cout << "The value of Long Long Int is: " << llongNumber << ", The storage size of Long Long Int is:" << sizeof(llongNumber) << " bytes" << std::endl;
    std::cout << "The value of Signed Long Long Variable is: " << signedLLongVar << ", The storage size of Signed Long Long Variable is: " << sizeof(signedLLongVar) << " bytes" << std::endl;
    std::cout << "The value of Signed Long Long Int is: " << signedLLongNumber << ", The storage size of Signed Long Long Int is: " << sizeof(signedLLongNumber) << " bytes" << std::endl;
    std::cout << "The value of Unsigned Long Long Int is: " << unsignedLLongNumber << ", The storage size of Unsigned Long Long Int is: " << sizeof(unsignedLLongNumber) << " bytes" << std::endl;
}