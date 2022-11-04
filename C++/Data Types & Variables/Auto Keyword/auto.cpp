#include <iostream>
#include <typeinfo>

int main(){
    
    /* 
        Here, we're going to cover the concept of auto keyword. 
        Shortly, what it does is it specifies that the type of the variable that is being declared will be automatically deducted from its initializer
    */

    // Define different types of variables using auto
    auto firstVar {10}; 
    auto secondVar {5.12f}; 
    auto thirdVar {6.810l}; 
    auto fourthVar {'g'}; 
    auto fifthVar {512u}; 
    auto sixthVar {513ul};
    auto seventhVar {6810ll}; 

    // Check the storage size of our variables 
    std::cout << "The storage size of the first variable is " << sizeof(firstVar) << " bytes" << std::endl;
    std::cout << "The storage size of the second variable is " << sizeof(secondVar) << " bytes" << std::endl;
    std::cout << "The storage size of the third variable is " << sizeof(thirdVar) << " bytes" << std::endl;
    std::cout << "The storage size of the fourth variable is " << sizeof(fourthVar) << " bytes" << std::endl;
    std::cout << "The storage size of the fifth variable is " << sizeof(fifthVar) << " bytes" << std::endl;
    std::cout << "The storage size of the sixth variable is " << sizeof(sixthVar) << " bytes" << std::endl;
    std::cout << "The storage size of the seventh variable is " << sizeof(seventhVar) << " bytes" << std::endl;
}