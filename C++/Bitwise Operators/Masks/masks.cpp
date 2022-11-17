#include <iostream>
#include <bitset>

int main(){

    /*
        Here, we're going to dive in the concept of masks
    */

    // Set up the masks
    const unsigned char maskBit0 {0b00000001}; 
    const unsigned char maskBit1 {0b00000010};
    const unsigned char maskBit2 {0b00000100};
    const unsigned char maskBit3 {0b00001000};
    const unsigned char maskBit4 {0b00010000};
    const unsigned char maskBit5 {0b00100000};
    const unsigned char maskBit6 {0b01000000};
    const unsigned char maskBit7 {0b10000000};

    // Define a variable to work with & check its value 
    unsigned char data {0b00000000}; 
    std::cout << "The value of data in binary is " << std::bitset<8>(data) << std::endl;

    // Set the bit 1 & Check the new value of data
    data |= maskBit1;
    std::cout << "The new value of data after setting the first bit is " << std::bitset<8>(data) << std::endl; 

    // Set the bit 5 & Check the result of data
    data |= maskBit5;
    std::cout << "The new value of data after setting the fifth bit is " << std::bitset<8>(data) << std::endl;

    // Reset the bit 1 & Check the result of data
    data &= (~maskBit1);
    std::cout << "The new value of data after resetting the first bit is " << std::bitset<8>(data) << std::endl;

    // Reset the bit 5 & Check the new value of data
    data &= (~maskBit5);
    std::cout << "The new value of data after resetting the fifth bit is " << std::bitset<8>(data) << std::endl;

    // Set up all the bits & Check the result of data
    data |= (maskBit0 | maskBit1 | maskBit2 | maskBit3 | maskBit4 | maskBit5 | maskBit6 | maskBit7);
    std::cout << "The new value of data after setting up all the bits is " << std::bitset<8>(data) << std::endl;

    // Reset the bits at position 1, 3, 5, 7
    data &= ~(maskBit1 | maskBit3 | maskBit5 | maskBit7);
    std::cout << "The new value of data after resetting some of the bits is " << std::bitset<8>(data) << std::endl;

    // Check the state of a bit (one is on & zero is off)
    std::cout << "The state of bit zero is " << ((data & maskBit0) >> 0) << std::endl;
    std::cout << "The state of bit one is " << ((data & maskBit1) >> 1) << std::endl;
    std::cout << "The state of bit two is " << ((data & maskBit2) >> 2) << std::endl;
    std::cout << "The state of bit three is " << ((data & maskBit3) >> 3) << std::endl;
    std::cout << "The state of bit four is " << ((data & maskBit4) >> 4) << std::endl;
    std::cout << "The state of bit five is " << ((data & maskBit5) >> 5) << std::endl;
    std::cout << "The state of bit six is " << ((data & maskBit6) >> 6) << std::endl;
    std::cout << "The state of bit seven is " << ((data & maskBit7) >> 7) << std::endl;

    // If we want to see the state of a bit in bool, we could follow this way
    std::cout << std::boolalpha;
    std::cout << "The state of bit one is " << static_cast<bool>(data & maskBit1) << std::endl;
    std::cout << "The state of bit six is " << static_cast<bool>(data & maskBit6) << std::endl; 

    // Toggle bit 0
    data ^= maskBit0;
    std::cout << "The new value of data after toggling the bit zero is " << std::bitset<8>(data) << std::endl;

    // Toggle multiple bits (2, 3, 5, 7)
    data ^= (maskBit2 | maskBit3 | maskBit5 | maskBit7);
    std::cout << "The new value of data after toggling multiple bits is " << std::bitset<8>(data) << std::endl;
}