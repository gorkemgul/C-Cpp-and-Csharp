#include <iostream>
#include <bitset>

int main(){

    /*
        Here, we're gonna cover the concept of Compound Bitwise Operators and explain them  
    */

    // Define two variables to work with
    unsigned char data {0b00110100};
    unsigned char data2 {0b11110011};

    // Compound left shift
    data <<= 2;
    std::cout << "The value of data after shifting 2 bits is " << std::bitset<8>(data) << std::endl;

    // Compound right shift
    data >>= 4;
    std::cout << "The value of data after shifting 4 bits is " << std::bitset<8>(data) << std::endl;

    // Compound bitwise OR
    data2 |= 0b00001111;
    std::cout << "The result of data2 after bitwise OR is " << std::bitset<8>(data2) << std::endl;

    // Compound bitwise AND
    data2 &= 0b01010011;
    std::cout << "The result of data2 after bitwise AND is " << std::bitset<8>(data2) << std::endl;

    // Compound bitwise XOR
    data2 ^= 0b00110100;
    std::cout << "The result of data2 after bitwise XOR is " << std::bitset<8>(data2) << std::endl;
} 