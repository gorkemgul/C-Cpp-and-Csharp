#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    We've done an example of while loop before, Here we're gonna turn that while loop to do while loop.
    - Similarly, - The loop is gonna multiply our number with the numbers from 1 to 10 (including 1 and 10).
    - After the loop is finished, we're gonna get 0, 100, 200, 300, 400, 500, 600, 700, 800, 900 and 1000 as outputs.
    */

   // Create an integer and a number 
   int j, number; 

   // Get a number from user
   printf("Please enter a number\n");
   scanf("%d", &number);

   // Create the do while loop
   do {
    printf("%d\n", j * number);
    j++;
   }  while(j<11);
}