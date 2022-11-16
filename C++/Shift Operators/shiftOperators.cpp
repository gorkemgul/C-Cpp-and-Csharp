#include <iostream>
#include <bitset>

int main(){

    /*
        Here, we're gonna cover shift operators & explain them a bit
        If shifting left, we multiply by two to the power of the number of digits we have
        If shifting right, we divide by two to the power of the number of digits we have
    */

    // Define a variable to work with
    unsigned short int data {0xff0u};

    // Check its storage size & value in binary
    std::cout << "The storage size of data is " << sizeof(data) << std::endl;
    std::cout << "The value of data in binary is " << std::bitset<16>(data) << std::endl;

    // Shift left by one bit
    data = static_cast<unsigned short int>(data << 1);

    // Check the value of data after shifting
    std::cout << "The value of data after shifting is " << std::bitset<16>(data) << std::endl;

    // Shift right by one bit
    data = static_cast<unsigned short int>(data >> 1);

    // Again, Check the value of data after shifting 
    std::cout << "The value of data after shifting is " << std::bitset<16>(data) << std::endl;

    // Shif right by four bits
    data = static_cast<unsigned short int>(data >> 4);

    // Check the value of data after shifting 4 bits
    std::cout << "The value of data after shifting 4 bits is " << std::bitset<16>(data) << std::endl;
}