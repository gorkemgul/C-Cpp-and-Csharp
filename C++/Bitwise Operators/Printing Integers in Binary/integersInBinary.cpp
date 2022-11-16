#include <iostream>
#include <bitset>

int main(){

    /*
        Here, we're going to focus on the concept of Printing Integers in Binary
        In cpp, we may print int in dec, octal and hex but, when it comes to binary, we need to follow another way
        Bitset is a container for dealing with data at the bit level
    */

    // Define a variable to work with
    unsigned short int data {15};
    
    // Print our variable out in hex, dec & octal
    std::cout << "The value of data in hex is " << std::showbase <<std::hex << data << std::endl; 
    std::cout << "The value of data in dec is " << std::showbase << std::dec << data << std::endl;
    std::cout << "The value of data in octal is " << std::showbase << std::oct << data << std::endl; 

    // Let's look at how to print it out in binary
    std::cout << "The value of data in binary is " << std::bitset<16>(data) << std::endl; // 16 is the storage size of unsigned short int
}