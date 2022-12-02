#include <iostream>

int main(){

    /*
        Here, we're gonna create a cmd calculator 
    */

    // Define the necessary variables
    char operation; 
    double first_operand;
    double second_operand;
    bool end {false};

    std::cout << "Welcome to the CALCULATOR!" << std::endl;

    // Create an infinite while loop
    while ((end == false)){

        // Get the information from the user
        std::cout << "Choose the operation you want (+, - , *, / operations are supported!). " << std::endl;
        std::cin >> operation;

        // Check if the operation that user chose is supported or not
        if ((operation != '+') && (operation != '-') && (operation != '*') && (operation != '/')){
            std::cout << operation << " operation not supported! Try the supported ones." << std::endl;
            continue;
        }
        
        std::cout << "Please type in the numbers you want do operation with" << std::endl;
        std::cin >> first_operand >> second_operand;

        // Create a switch case statement
        switch (operation){

            case '+':
                std::cout << first_operand << " + " << second_operand << " = " << (first_operand + second_operand) << std::endl; 
                break;
            
            case '-':
                std::cout << first_operand << " - " << second_operand << " = " << (first_operand - second_operand) << std::endl;
                break;
            
            case '*':
                std::cout << first_operand << " * " << second_operand << " = " << (first_operand * second_operand) << std::endl;
                break;
            
            case '/':
                std::cout << first_operand << " / " << second_operand << " = " << (first_operand / second_operand) << std::endl;
                break;

            default:
                std::cout << operation << " operation not supported! Try the supported ones." << std::endl;
                break;
        } 

        // Ask if user wants to continue or stop      
        std::cout << "Continue? (If yes type in Y, otherwise type in N)" << std::endl;
        char choice;
        std::cin >> choice;
        if ((choice == 'Y') || (choice == 'y')){
            end = false;
        } else{
            end = true;
        }
    } 
    std::cout << "BYE!" << std::endl;
}