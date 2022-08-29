#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* We're gonna create a couple of while loops to:
        - Detect even numbers between 0-10
        - Detect odd numbers between 0-10
    */

   // Let's create an integer
   int i;
   i = 0;

   // Create a while loop to find the even numbers from 0 to 10
   while(i < 10)
   {
        printf("%d ", i);
        i += 2;
   }

   // Create another integer
   int j = 1;

   // Now, let's create another while loop to check odd numbers 
    while(j < 10)
    {
        printf("%d ", j);
        j += 2;
    }
}