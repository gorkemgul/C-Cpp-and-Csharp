#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    Here, we're gonna look at how continue works in c.
    - The continue statement skips some lines of code inside the loop and continues with the next iteration.
    */ 

   // Create a number
   int number;

   // Create a for loop
   for(number = 0; number < 10; number++)
   {
        if(number == 5) // It's gonna skip printing 5 and continue 
        {
            continue;
        }
        printf("%d\n", number);
   }
}