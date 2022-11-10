#include <iostream>
#include <iomanip>

int main(){

    /*
        Here, we're going to focus on the concept of output formatting by doing many examples
        - std::flush - The reason why we use this, we're just trying to make sure that the message has been sent to the stream.
        - std::setw - Adjusts the field width for the item which is about to be printed
        - std::showpos & std::noshowpos - Showpos shows the plus sign ("+") for positive numbers & noshowpos hides it
        - std::internal - In case we use this one it's going to make the sign left justified & make the data right justified
        - std::setfill - It fills the spaces with entered char  
        - std::uppercase & std::nouppercase - In case using uppercase the chars of the outputs are gonna be in uppercase & In case using nouppercase the chars of the outputs are gonna be in lowercase
        - std::fixed & std::scientific - They modifiy the default formatting for floating-point output
        - std::setprecision - Sets the decimal precision to be used to format floating-point values on output operations.

    */

    // Let's start by using "std::flush"
    std::cout << "This is a test message!" << std::endl << std::flush; 

    // Create an unformatted table 
    std::cout << "FullName" << " " << "Age" << std::endl; 
    std::cout << "Gorkem" << " " << "24" << std::endl;
    std::cout << "Recep" << " " << "24" << std::endl;
    std::cout << "Medine" << " " << "23" << std::endl;
    std::cout << "Ali" << " " << "22" << std::endl;
    std::cout << "Bahar" << " " << "22" << std::endl;

    // Let's define the column width & create a formatted table using "std::setw" to see the difference 
    int colWidth {10};

    std::cout << std::setw(colWidth) << "Fullname" << std::setw(colWidth) << "Age" << std::endl; 
    std::cout << std::setw(colWidth) << "Gorkem" << std::setw(colWidth) << "24" << std::endl;
    std::cout << std::setw(colWidth) << "Recep" << std::setw(colWidth) << "24" << std::endl;
    std::cout << std::setw(colWidth) << "Medine" << std::setw(colWidth) << "23" << std::endl;
    std::cout << std::setw(colWidth) << "Ali" << std::setw(colWidth) << "22" << std::endl;
    std::cout << std::setw(colWidth) << "Bahar" << std::setw(colWidth) << "22" << std::endl;

    // Make the table left justified (it's right justified by default)
    int colWidth2 {10};

    std::cout << std::left;
    std::cout << std::setw(colWidth2) << "Fullname" << std::setw(colWidth) << "Age" << std::endl; 
    std::cout << std::setw(colWidth2) << "Gorkem" << std::setw(colWidth) << "24" << std::endl;
    std::cout << std::setw(colWidth2) << "Recep" << std::setw(colWidth) << "24" << std::endl;
    std::cout << std::setw(colWidth2) << "Medine" << std::setw(colWidth) << "23" << std::endl;
    std::cout << std::setw(colWidth2) << "Ali" << std::setw(colWidth) << "22" << std::endl;
    std::cout << std::setw(colWidth2) << "Bahar" << std::setw(colWidth) << "22" << std::endl;

    // Let's look at what happens if we make it also internal justified (sign is going to be left justified & data is going to be right justified)
    std::cout << std::endl;
    std::cout << std::right;
    std::cout << std::setw(colWidth2) << "Scores" << std::endl;
    std::cout << std::setw(colWidth2) << -10 << std::endl;
    std::cout << std::internal;
    std::cout << std::setw(colWidth2) << -10 << std::endl;

    // What if we use "std::setfill" while creating the table (the spaces will be filled by the entered char)
    std::cout << std::left;
    std::cout << std::setfill('-');
    std::cout << std::setw(colWidth2) << "Fullname" << std::setw(colWidth) << "Age" << std::endl; 
    std::cout << std::setw(colWidth2) << "Gorkem" << std::setw(colWidth) << "24" << std::endl;
    std::cout << std::setw(colWidth2) << "Recep" << std::setw(colWidth) << "24" << std::endl;
    std::cout << std::setw(colWidth2) << "Medine" << std::setw(colWidth) << "23" << std::endl;
    std::cout << std::setw(colWidth2) << "Ali" << std::setw(colWidth) << "22" << std::endl;
    std::cout << std::setw(colWidth2) << "Bahar" << std::setw(colWidth) << "22" << std::endl;

    // Let's look at how to use "std::showpos" & "std::noshowpos" (doesn't affect negative numbers!)
    int number {+10};
    int number2 {+25};
    
    std::cout << number << std::endl;
    std::cout << std::showpos;
    std::cout << number2 << std::endl;
    std::cout << std::noshowpos;
    std::cout << number2 << std::endl;

    // Define three numbers & turn them into different number systems
    int posNumber {158158};
    int negNumber {-68102};
    double doubleNum {153.15};

    std::cout << "The number 158158 in decimal: " << std::dec << posNumber << std::endl;
    std::cout << "The number 158158 in hex: " << std::hex << posNumber << std::endl;
    std::cout << "The number 158158 in oct: " << std::oct << posNumber << std::endl;

    std::cout << "The number -68102 in decimal: " << std::dec << negNumber << std::endl;
    std::cout << "The number -68102 in hex: " << std::hex << negNumber << std::endl;
    std::cout << "The number -68102 in oct: " << std::oct << negNumber << std::endl; 

    // Fractional numbers can't be turned into different number systems
    std::cout << "The number 153.15 in decimal: " << std::dec << doubleNum << std::endl;
    std::cout << "The number 153.15 in hex: " << std::hex << doubleNum << std::endl;
    std::cout << "The number 153.15 in oct: " << std::oct << doubleNum << std::endl;

    // Let's look at how to use "std::uppercase" & "std::nouppercase"
    int posNumber2 {6810815};

    std::cout << std::uppercase;
    std::cout << "The number 6810815 in hex: " << std::hex << posNumber2 << std::endl;
    std::cout << std::nouppercase;
    std::cout << "The number 6810815 in hex: " << std::hex << posNumber2 << std::endl;

    // Define the fractional numbers to work with
    double firstNumber {3.1415926535897932384626433832795};
    double secondNumber {2006.0};
    double thirdNumber {1.34e-10};

    // Check the values of the numbers in fixed 
    std::cout << std::fixed;
    std::cout << "The value of the first number in fixed is " << firstNumber << std::endl;
    std::cout << "The value of the second number in fixed is " << secondNumber << std::endl;
    std::cout << "The value of the third number in fixed is " << thirdNumber << std::endl;

    // Check the values of the numbers in scientific
    std::cout << std::scientific;
    std::cout << "The value of the first number in scientific is " << firstNumber << std::endl;
    std::cout << "The value of the second number in scientific is " << secondNumber << std::endl;
    std::cout << "The value of the third number in scientific is " << thirdNumber << std::endl;

    // An example of setprecision
    std::cout << std::setprecision(10);
    std::cout << firstNumber << std::endl;
    std::cout << secondNumber << std::endl;
    std::cout << thirdNumber << std::endl;

    // Note: In case the precision is bigger than supported by the type, It's gonna print random numbers
}