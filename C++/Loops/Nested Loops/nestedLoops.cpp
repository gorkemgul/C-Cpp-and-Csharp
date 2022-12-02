#include <iostream>
#include <iomanip>

int main(){

    /*
        Here, we're gonna cover the concept of nested loops 
    */

    // Set up the necessary variables
    const size_t ROWS {12};
    const size_t COLS {3};

    // // Create a nested for loop to work with
    for (size_t row {0}; row < ROWS; ++row){
        for (size_t col {0}; col < COLS; ++col){
            std::cout << "(row " << std::setw(2) << row << ", col " << std::setw(2) << col << ") ";
        }
        std::cout << std::endl;
    }

    // Create a nested while loop to work with
    size_t row {0};
    size_t col {0};
    while (row < ROWS){
        while (col < COLS){
            std::cout << "(row " << std::setw(2) << row << ", col " << std::setw(2) << col << ") ";
            ++col;
        }
        std::cout << std::endl;
        col = 0;
        ++row;
    }

    // Create a nested do while loop to work with
    do{
        do{
            std::cout << "(row " << std::setw(2) << row << ", col " << std::setw(2) << col << ") ";
            ++col;

        } while (col < COLS);    
    std::cout << std::endl;
    col = 0;
    ++row;
    } while (row < ROWS);
}