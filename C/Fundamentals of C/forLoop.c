#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    -We're going to cover for loops in c.
    -The general structure of for loop syntax in c is:
    -for (initial value; condition; incrementation or decrementation)
    -initial value: initial statement, condition: test statement, incrementation or decrementation: update statement
    */
    // let's create an integer and call it a
    int a;
    // let's create a for loop
    for (a = 0; a < 5; a++) // if we also want to print 5 as an ouput, we need to write it like this: a < 6. Or we could use this way: a <= 5
    {
        printf("%d\n", a);
    }
}