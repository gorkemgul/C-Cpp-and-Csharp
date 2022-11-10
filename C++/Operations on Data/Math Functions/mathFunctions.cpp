#include <iostream>
#include <cmath>

int main(){

    /*
        Here, we're going to explain some of the math functions in cpp by showing a couple of examples
        - std::floor - computes the largest int value not greater than the arg
        - std::ceil - computes the smallest int value not less than the arg
        - std::abs - computes the absolute value of an integer number
        - std::exp - computes e raised to the given power arg
        - std::pow - computes the value of base raised to the power exp or iexp
        - std::log - computes the natural logarithm of arg
        - std::sqrt - computes the square root of arg
        - std::round - computes the nearest integer value to arg 
    */

    // Define a couple of variables to work with
    double weight {7.7};
    double weight2 {-7.7};
    double weight3 {-1500};
    
    // An example of floor
    std::cout << "Floor of the weight is " << std::floor(weight) << std::endl;
    std::cout << "Floor of the weight2 is " << std::floor(weight2) << std::endl;

    // An example of ceil
    std::cout << "Ceil of the weight is " << std::ceil(weight) << std::endl;
    std::cout << "Ceil of the weight2 is " << std::ceil(weight2) << std::endl;

    // An example of abs
    std::cout << "The absolute value of weight is " << std::abs(weight) << std::endl;
    std::cout << "The absolute value of weight2 is " << std::abs(weight2) << std::endl;
    std::cout << "The absolute value of weigh3 is " << std::abs(weight3) << std::endl; 

    // An example of exp
    double weight4 = std::exp(10);
    std::cout << "The exponential of 10 is " << weight4 << std::endl;

    // An example of pow
    std::cout << "The result of 3 ^ 4 is " << std::pow(3, 4) << std::endl;
    std::cout << "The result of 9 ^ 3 is " << std::pow(9, 3) << std::endl;

    // An example of log & log10
    std::cout << std::log(100) << std::endl;
    std::cout << std::log10(1000) << std::endl;

    // An example of sqrt
    std::cout << "The square root of 81 is " << std::sqrt(81) << std::endl;

    // An example of round
    std::cout << "Rounded value of 6.810 is " << std::round(6.810) << std::endl;
    std::cout << "Rounded value of 2.5 is " << std::round(2.5) << std::endl;
    std::cout << "Rounded value of 2.4 is " << std::round(2.4) << std::endl;
}