#include <iostream>
#include <bitset>

int main(){

    /*
        Here, we're going to cover Bitwise Logical Operators
        These operators are the same operators that we learnt before, but we're going to be looking at how to work with them at the bit level
    */

    // Define two variable to work with
    unsigned char data {0x3};
    unsigned char data2 {0x5};

    // Print the variables out 
    std::cout << "The value of data in binary is " << std::bitset<8>(data) << std::endl; 
    std::cout << "The value of data2 in binary is " << std::bitset<8>(data2) << std::endl;

    // Bitwise AND
    std::cout << "The result of data & data2 is " << std::bitset<8>(data & data2) << std::endl;

    // Bitwise Or
    std::cout << "The result of data | data2 is " << std::bitset<8>(data | data2) << std::endl;

    // Bitwise NOT
    std::cout << "The value of data after bitwise not is " << std::bitset<8>(~data) << std::endl;
    std::cout << "The value of data2 after bitwise not is " << std::bitset<8>(~data2) << std::endl;
    std::cout << "~10001100 is equal to " << std::bitset<8>(~0b10001100) << std::endl;

    // Bitwise Xor
    std::cout << "The result of data xor data2 is " << std::bitset<8>(data ^ data2) << std::endl;
}