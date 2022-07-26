#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* Comparison Operators
    == != > < >= <=
    */
    // let's create two variables to compare them
    int x = 25;
    int y = 20;
    // let's check if they're equal
    printf("%d\n", x == y); // if they're euqal it'll return 0.
    // let's check if they're not equal this time
    printf("%d\n", x != y); // if they're not equal then it will return one.
    // let's check if the first variable is less than the second one
    printf("%d\n", x < y); // if x is less than y then it'll return 1.
    // let's check if x is higher than y
    printf("%d\n", x > y); // if x is higher than y then it's going to return 1.
    // we've seen a couple of operators so far. Now, let's create two more variables to see how rest of comparison operators work.
    int x2, y2;
    x2 = 5;
    y2 = 6;
    // let's check if the first variable higher than or equal to second variable
    printf("%d\n", x2 >= y2); // if it's then it's going to return 1. Otherwise we'll get 0.
    // let's check if the first variable less than or equal to second variable
    printf("%d", x2 <= y2); // if it's then it's also going to return 1. Otherwise we'll also get 0 as an output.
}