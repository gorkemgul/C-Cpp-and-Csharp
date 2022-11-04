#include <iostream>

int main(){
    
    /*
        Here, we're going to cover characters & text by doing some examples
    */

    // Define a couple of chars
    char firstChar {'g'};
    char secondChar {'u'};
    char thirdChar {'l'};

    // Demonstrate the results by printing them out
    std::cout << "The value of the first character is: " << firstChar << std::endl;
    std::cout << "The value of the second character is: " << secondChar << std::endl;
    std::cout << "The value of the third character is: " << thirdChar << std::endl;
    
    // Get a character from the user & print its char with its ASCII value
    char enteredChar;
    std::cout << "Please enter a char..." << std::endl;
    std::cin >> enteredChar;
    std::cout << "The given character by the user is " << enteredChar << " & its ASCII value is " << static_cast<int>(enteredChar) << "." << std::endl;

    // Another way of showing ASCII value of a char
    std::cout << "The given character by the user is " << enteredChar << " & its ASCII valeu is " << int(enteredChar) << "." << std::endl;
}