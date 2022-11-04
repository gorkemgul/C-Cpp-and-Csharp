#include <iostream>
#include <iomanip>

int main(){
   
    /*
        Here, we're going to explain & focus on fractional numbers
    */
   
    // Define a couple of fractional numbers using float, double & long double to see the difference
    float firstNumber {5.1213512135121351213f}; // We need to add f to the end of the number while using float 
    double secondNumber {8.1517815178151781517}; // We do not have to add anything while working with double because it's default
    long double thirdNumber {3.455121381517724256810121620L}; // We also have to add L to the end of the number while working with long double
    
    // Print the storage size out
    std::cout << "The storage size of float is: " << sizeof(firstNumber) << std::endl; // float (4 Bytes)
    std::cout << "The storage size of double is: " << sizeof(secondNumber) << std::endl; // double (8 Bytes)
    std::cout << "The storage size of long double is: " << sizeof(thirdNumber) << std::endl; // long double (16 Bytes)

    // Let's look at how to use "setprecision" & the concept of the precision 
    std::cout << std::setprecision(20); 
    std::cout << "The value of the First Number is: " << firstNumber << std::endl; // Precision of float is 7
    std::cout << "The value of the Second Number is: " << secondNumber << std::endl; // Precision of double is 15
    std::cout << "The value of the Third Number is: " << thirdNumber << std::endl; // Precision of long double is 17

    // Let's look at what is narrowing conversion by defining two variables
    float floatNumber {1.020304050607080f};
    double doubleNumber {1.020304050607080};

    // Print the variables out & check the results
    std::cout << "The value of Float Number is: " << floatNumber << std::endl; // 1.0203040838241577148
    std::cout << "The value of Duble Number is: " << doubleNumber << std::endl; //  1.0203040506070799598
    // Note: In case we store a fractional number using float, It can cause a problem called narrowing conversion because of the precision limit

    // We may use scientific notation while restoring a huge number or small number
    // Define the same huge number using scientific notation
    double hugeNum {192400023}; 
    double hugeNum2 {1.92400023e8};

    // Define the same small number using scientific notation
    double smallNum {0.00000000003498};
    double smallNum2 {3.498e-11};

    // Let's print the numbers we defined out
    std::cout << "The value of the Huge Number is: " << hugeNum << std::endl;
    std::cout << "The value of the Huge Number 2 is: " << hugeNum2 << std::endl;
    std::cout << "The value of the Small Number is: " << smallNum << std::endl;
    std::cout << "The value of the Small Number 2 is: " << smallNum2 << std::endl;

    // Lastly, let's look at the concept of the Infinity & NaN
    double number {10};
    double number2 {}; // 0

    // In case we want to do a division operation we'll get "inf" as result
    double result {number / number2};
    std::cout << "The result of the division operation is: " << result << std::endl;

    // On the other hand if we want to do another division operation with zeros we'll get "nan" as result
    double number3 {}; // 0
    double result2 {number2 / number3};
    std::cout << "The result of the second division operation is: " << result2 << std::endl;
}   