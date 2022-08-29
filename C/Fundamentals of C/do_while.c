#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    Here we're gonna look at how do while works
    - do-while loop is mainly used in the case where we need to execute the loop at least once.
    */

   // Let's create an integer
   int x;
   x = 0;

   // Create the do-while
   do {
    printf("%d\n", x);
    x++;
   } while(x < 10);
}