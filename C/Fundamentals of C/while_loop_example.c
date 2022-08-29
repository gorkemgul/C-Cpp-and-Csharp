#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    - We're gonna do an exercise about while loop in c.
    - Our program is gonna ask us to enter a number and we're gonna enter 100.
    - The loop is gonna multiply our number with the numbers from 1 to 10.
    - After the loop is finished, we're gonna get 100, 200, 300, 400, 500, 600, 700, 800, 900 and 1000 as outputs.
    */
    // let's start by creating an integer
    int i;
    // let's take a number from user
    int number;
    printf("Please enter a number...\n"); // it's gonna be 100
    scanf("%d", &number);
    // let's create a while loop...
    while (i < 11)
    {
        printf("%d\n", i * number);
        i++;
    }
}