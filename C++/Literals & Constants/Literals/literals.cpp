#include <iostream>

int main(){

    /*
        Here, we're going to focus on the concept of the literals
        Literals represent fixed values that cannot be modified
        They contain memory but they do not have references as variables
    */

    // Define a couple of variables to show different literal types
    unsigned char unsignedChar {53u};
    short shortVar {-32768};
    signed short signedShort {122};
    signed short int signedShortInt {-158};
    unsigned short int unsignedShortInt {6810U};
    
    const int intVar {60};
    signed signedVar {31};
    signed int signedInt {79};
    unsigned int unsignedInt {555U};
    
    long longVar {98L};
    long int longInt {33l};
    signed long signedLong {53l};
    signed long int signedLongInt {42l};
    unsigned long int unsignedLongInt {555ul};

    long long longLongVar {888ll};
    long long int longLongInt {999ll};
    signed long long signedLongLongVar {444ll};
    signed long long int signedLongLongInt {1234ll};

    // Literals with number sytems (hex, octal, binary)
    unsigned int hexNumber {0x158BU};
    int hexNumber2 {0x22U};
    int blackColor {0xffffff};
    int octalNumber {0777u};
    unsigned int binaryNumber {0b11111111u};

    // Other Literals 
    char charVar {'c'};
    int number {15};
    float fractionalNumber {6.8f};
    std::string stringVar {"My name is Gorkem!"};
}