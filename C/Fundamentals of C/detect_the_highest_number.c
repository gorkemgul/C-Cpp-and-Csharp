#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    - We're going to write an if statement to find the highest value between given inputs.
    - At first, we're going to use only if statement.
    - After that, we're going to write it again with if - else if - else statements.
    */
    // let's take 3 inputs from user
    int x, y, z;
    printf("Please enter three numbers.\n");
    scanf("%d%d%d", &x, &y, &z);
    // let's see the values that we've entered by printing them
    printf("You've entered these numbers: a = %d, b = %d, c = %d,\n", x, y, z);
    // let's create an if statement to find the highest value within given numbers
    /*if (x > y && x > z)
    {
        printf("X is the highest number.");
    }
    if (y > x && y > z)
    {
        printf("Y is the highest number.");
    }
    if (z > x && z > y)
    {
        printf("Z is the highest number.");
    }
    if (x == y && y == z)
    {
        printf("They're all equal.");
    }
    */
    // now, let's do the same using if - else if - else statements
    if (x > y && x > z)
    {
        printf("%d is the highest number.", x);
    }
    else if (y > x && y > z)
    {
        printf("%d is the highest number.", y);
    }
    else if (z > x && z > y)
    {
        printf("%d is the highest number.", z);
    }
    else
    {
        printf("They're all equal.");
    }
}