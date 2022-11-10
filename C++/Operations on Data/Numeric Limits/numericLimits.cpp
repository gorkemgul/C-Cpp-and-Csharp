#include <iostream>
#include <limits>

int main(){

    /*
        Here, we're going to check the numeric limits of the data types
    */

    std::cout << "The range of short starts from " << std::numeric_limits<short>::min() << " to " << std::numeric_limits<short>::max() << std::endl;
    std::cout << "The range of unsigned short starts from " << std::numeric_limits<unsigned short>::min() << " to " << std::numeric_limits<unsigned short>::max() << std::endl;
    std::cout << "The range of int starts from " << std::numeric_limits<int>::min() << " to " << std::numeric_limits<int>::max() << std::endl; 
    std::cout << "The range of unsigned int starts from " << std::numeric_limits<unsigned int>::min() << " to " << std::numeric_limits<unsigned int>::max() << std::endl;
    std::cout << "The range of long starts from " << std::numeric_limits<long>::min() << " to " << std::numeric_limits<long>::max() << std::endl;
    std::cout << "The range of float starts from " << std::numeric_limits<float>::min() << " to " << std::numeric_limits<float>::max() << std::endl;    
    std::cout << "The range of float (with lowest) starts from " << std::numeric_limits<float>::lowest() << " to " << std::numeric_limits<float>::max() << std::endl;
    std::cout << "The range of double (with lowest) starts from " << std::numeric_limits<double>::lowest() << " to " << std::numeric_limits<double>::max() << std::endl;
    std::cout << "The range of long double (with lowest) starts from " << std::numeric_limits<long double>::lowest() << " to " << std::numeric_limits<long double>::max() << std::endl;
} 