#include <stdio.h>
#include <stdlib.h>

int main()
{
    // We're going to write an if-else statement to find if the given number is odd or even.
    // let's take an input from user
    int number;
    printf("Please, enter a number.");
    scanf("The given number is: %d", &number);
    // let's write an if-else statement
    if (number % 2 == 0)
    {
        printf("%d is an even number.", number);
    }
    else
    {
        printf("%d is an odd number.", number);
    }
}