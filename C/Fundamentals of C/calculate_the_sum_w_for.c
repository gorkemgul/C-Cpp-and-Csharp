#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    - We're going to do an exercise to have a better understanding of for loops in c.
    - We're going to write a loop that makes a summation from 1 to a given number.
    */
    // let's start by creating the integers
    int a, result;
    result = 0;
    // let's take a number from user
    int number;
    printf("Please enter a number...\n");
    scanf("%d", &number);
    // let's create the for loop...
    for (a = 1; a <= number; a++)
    {
        result += a;
    }
    // let's see the output
    printf("%d", result);
}