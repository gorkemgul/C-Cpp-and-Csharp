#include <iostream>

int main(){

    /*
        Here, we're gonna cover the concept of switch scope
    */

    // Define a variable called condition
    int condition {0};

    
    switch (condition){
        
        // We don't have to put curley brackets here, this also works
        case 0:
            std::cout << "running the 0th condition!" << std::endl;
            break;
        
        case 1:
            std::cout << "running the 1st condition!" << std::endl;
            break;
    
        default:
            break;
    }       

    // Let's look at how to share variables between different cases by declaring them in different places
    int actual_condition {0};

    switch (actual_condition) {

        int x; // we can't declare a variable here, because it's never gonna run (e.g. int x = 15;)

        case 0:
            
            int y; // we also can't declare a variable here, because this case it's not always gonna run

            // we can use x here
            x = 5;
            x++;
            std::cout << "The value of x is " << x << std::endl;
            break;

        case 1:

            int z; // Can't be declared, the same reason as others
            
            // we can also use y here
            y = 13;
            y--;
            std::cout << "The value of y is " << y << std::endl;
            break;
        
        default:
            int u; // we may declare this one, cuz there's no other case after default case

            // try to use z here
            z = 12;
            z--;
            std::cout << "The value of z is " << z << std::endl;
            break;
    }
    // Note: We can't use a variable before it's declaration point
}