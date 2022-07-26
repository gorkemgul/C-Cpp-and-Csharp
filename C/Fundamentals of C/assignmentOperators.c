#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* We're going to learn about Assignment Operators.
    = += -= *= /= %=
    */
    // We've seen how to add a value to our variables. But there is another way to do that.
    // e.g. if we want to add 5 to our variable instead of writing x = x + 5, we can write it like this: x +=5.
    // let's create a variable to do so...
    int x = 5;
    // let's add 5 to our variable and see how it works...
    x += 5;
    printf("%d\n", x); // the x is 10 now.
    // let's subtract 3 from our variable...
    x -= 3;
    printf("%d\n", x);
    // now, let's create another variable and divide by 2
    int y = 10;
    y /= 2;
    printf("%d\n", y);
    // let's multiply our variable by 4 and print it out
    y *= 4;
    printf("%d\n", y);
    // let's do the remainder assignment. To do so, let's create another variable called y2
    int y2;
    y2 = 20;
    y2 %= 5;
    printf("%d", y2);
}