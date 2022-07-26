#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* We're going to cover arithmetic operators in C.
    + - * / % ++ --
    */
    // let's create two integers
    int x = 15;
    int y = 10;
    // let's print their summation
    printf("%d\n", x + y);
    // there is another way to do the same thing...
    int x1 = 15;
    int y1 = 10;
    int result;
    result = x1 + y1;
    // let's print the result
    printf("%d\n", result);
    // we've seen addition. now, let's try to do a subtraction
    int x2 = 20;
    int y2 = 5;
    int result1 = x2 - y2;
    // let's print the result again
    printf("%d\n", result1);
    // Now, let's look at how to do a multiplication.
    int x3 = 5;
    int y3 = 6;
    int result2;
    result2 = x3 * y3;
    // let's see the result
    printf("%d\n", result2);
    // we've seen addition, subtraction & multiplication so far. Now, let's look at how to do a division.
    int x4 = 10;
    int y4 = 5;
    int result3 = x4 / y4;
    // let's see the output
    printf("%d\n", result3);
    // Lastly, let's look at "++" and "--" operators
    // The operator "++" adds 1 to the variable that we create
    int x5 = 6;
    int result4 = ++x5;
    printf("%d\n", result4);
    // The operator "--" subtracts 1 from the variable that we create
    int x6 = 6;
    printf("%d", --x6);
}