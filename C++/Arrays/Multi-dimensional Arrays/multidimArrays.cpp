#include <iostream>

int main(){

    /*
        Here, we're gonna focus on the concept of multi-dimensional arrays
    */

    // Declare a two dimensional array
    int twoDimArray [3][4]; 

    // Print out the values of the elements in our two dimensional array
    for (size_t i{0}; i < 3; ++i){
        for (size_t j{0}; j < 4; ++j){
            std::cout << twoDimArray[i][j] << std::endl;
        }
    }

    // Declare and initalize a two dimensional array 
    int twoDimArray2 [3][4]{
        {1, 5, 12, 13},
        {1, 3, 4, 5},
        {1, 8, 15, 17},
    };

    // Print out the values of the elements in our second two dimensional array  
    for (size_t i{0}; i < 3; ++i){
        for (size_t j{0}; j < 4; ++j){
            std::cout << twoDimArray2[i][j] << " ";
        }
        std::cout << "| ";
    }
    std::cout << std::endl;

    // Let's create the same for loop without hard-coding. To do so, we may get the size of the array by using "std::size"
    for (size_t i{0}; i < std::size(twoDimArray2); ++i){
        for (size_t j{0}; j < std::size(twoDimArray2[i]); ++j){
            std::cout << twoDimArray2[i][j] << " ";
        }
        std::cout << "| ";
    }
    std::cout << std::endl;

    // Define and initialize a three dimensional array
    int threeDimArray [7][5][3]{
        {
            {3, 4, 5}, {6, 8, 10}, {5, 12, 13}, {8, 15, 17}, {7, 24, 25}
        },
        {
            {6, 8, 10}, {5, 12, 13}, {8, 15, 17}, {7, 24, 25}, {3, 4, 5}
        },
        {
            {5, 12, 13}, {6, 8, 10}, {3, 4, 5}, {8, 15, 17}, {7, 24, 25}
        },
        {
            {8, 15, 17}, {7, 24, 25}, {6, 8, 10}, {3, 4, 5}, {5, 12, 13}
        },
        {
            {7, 24, 25}, {8, 15, 17}, {5, 12, 13}, {6, 8, 10}, {3, 4, 5}
        }, 
        {
            {5, 12, 13}, {8, 15, 17}, {7, 24, 25}, {3, 4, 5}, {6, 8, 10}
        },
        {
            {3, 4, 5}, {6, 8, 10}, {8, 15, 17}, {7, 24, 25}, {5, 12, 13}
        }
    };

    // Print out our three dimensional array (without hard-coding) 
    for (size_t i{0}; i < std::size(threeDimArray); ++i){
        for (size_t j{0}; j < std::size(threeDimArray[i]); ++j){
            for (size_t k{0}; k < std::size(threeDimArray[i][j]); ++k){
                std::cout << threeDimArray[i][j][k] << " ";
            }
            std::cout << "| ";
        } 
        std::cout << std::endl;
    } 

    // We can omit some dimension if we want. Note that sizes that array uses are expected to be constant!
    const size_t num_of_cols {3};

    int nums [][num_of_cols] {
        {3, 4, 5},
        {5, 12, 13},
        {8, 15, 17},
        {7, 24, 25},
        {6, 8, 10},
    };
    std::cout << std::endl;

    for (size_t i{0}; i < std::size(nums); ++i){
        std::cout << "{";
        for (size_t j{0}; j < std::size(nums[i]); ++j){
            std::cout << nums[i][j] << " ";
        }
        std::cout << "}" << std::endl;
    }
    std::cout << std::endl;

    // Let's do the same with a three dimensional array (Only the left most is not compulsory!)
    const size_t setNum {3};
    const size_t setNum2 {5};

    int numsThreeDim [][setNum2][setNum]{
        {
            {3, 4, 5}, {6, 8, 10}, {5, 12, 13}, {8, 15, 17}, {7, 24, 25}
        },
        {
            {6, 8, 10}, {5, 12, 13}, {8, 15, 17}, {7, 24, 25}, {3, 4, 5}
        },
        {
            {5, 12, 13}, {8, 15, 17}, {7, 24, 25}, {3, 4, 5}, {6, 8, 10}
        },
        {
            {8, 15, 17}, {7, 24, 25}, {3, 4, 5}, {6, 8, 10}, {5, 12, 13}
        },
        {
            {7, 24, 25}, {3, 4, 5}, {6, 8, 10}, {5, 12, 13}, {8, 15, 17}
        }
    };

    for (size_t i{0}; i < std::size(numsThreeDim); ++i){
        for (size_t j{0}; j < std::size(numsThreeDim[j]); ++j){
            for (size_t k{0}; k < std::size(numsThreeDim[i][j]); ++k){
                std::cout << numsThreeDim[i][j][k] << " ";
            } std::cout << "| ";
        } std::cout << std::endl;
    }
    std::cout << std::endl;

    // Let's modify data
    numsThreeDim[1][2][0] =  1998;

    // Print out the multi-dimensional array after modifying it
    for (size_t i{0}; i < std::size(numsThreeDim); ++i){
        for (size_t j{0}; j < std::size(numsThreeDim[j]); ++j){
            for (size_t k{0}; k < std::size(numsThreeDim[i][j]); ++k){
                std::cout << numsThreeDim[i][j][k] << " ";
            } std::cout << "| ";
        } std::cout << std::endl;
    }
}