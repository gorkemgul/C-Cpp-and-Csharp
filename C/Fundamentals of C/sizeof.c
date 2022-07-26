#include <stdio.h>
#include <stdlib.h>

int main()
{
    // We're going to check storage size of every data types in C. To do so, we need to use sizeof() function.
    // let's start with integer
    printf("Storage size for int data type is: %d\n", sizeof(int));
    // now, let's look at float
    printf("Storage size for float data type is: %d\n", sizeof(float)); // the reason why we use %d instead of using %f is, we're trying to print a number.
    // alright, let's check char this time
    printf("Storage size for char data type is: %d\n", sizeof(char)); // again, we're going to use %d because of the same reason.
    // lastly, let's check double...
    printf("Storage size for double data type is: %d\n", sizeof(double)); // same reason...

    // We can also check the size of the variables...
    int number;
    number = 10;
    printf("The storage size of our variable is: %d", sizeof(number));
}