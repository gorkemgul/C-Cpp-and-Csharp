#include <stdio.h>
#include <stdlib.h>

int main(){
    /*
    We're gonna create a while loop that decreases the value of an integer from 10 to 1 (including 10 and 1)
    */

   // Let's start by creating an integer
   int i;
   i = 10;

   // Create the while loop
   while(i > 0)
   {
        printf("%d\n", i);
        i -= 1;
   }
}