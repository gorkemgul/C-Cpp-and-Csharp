#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* We're going to cover:
    - If statement
    - If-else statement
    - Else if statement.
    */
    // let's start by creating 3 integers.
    int number1 = 10, number2 = 8, number3 = 10;
    // // let's create an if statement, to do so we need to check a condition such as, if number1 > number2.
    // if (number2 > number1)
    // {
    //     printf("Number2 is greater than number1."); // if the statement is True. Our printf function will work.
    // }
    // we've seen how if statement works. Now, let's turn if statement into comment and create an if-else statement.
    // if (number1 > number2)
    // {
    //     printf("Number1 is greater than number2.");
    // }
    // else
    // {
    //     printf("Number1 is less than number2.");
    // }
    // we've also seen how if-else statement works. Let's also turn this one into comments and create an if - else if - else statement.
    if (number1 > number3)
    {
        printf("Number1 is greater than number3.");
    }
    else if (number1 < number3)
    {
        printf("Number1 is less than number3.");
    }
    else
    {
        printf("Number1 is equal to number3.");
    }
}