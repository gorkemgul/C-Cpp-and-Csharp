#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    Here we're going to look at how to use break correctly. 
    - We could either stop our program before it prints the number out, or after it prints out (meaning if we use it before then we're not gonna see the number at the given condition), depends on us.
    */

    // Let's look at how to stop our algorithm when the condition is True
    // Create a number
    int number;

    // Create the for loop
    for(number = 0; number < 10; number++)
    {
        if(number == 4)
        {
            break;
        }
        printf("%d\n", number);
    
    }

    // Let's create another for loop to see the difference that we've explained above
    for(number = 0; number < 10; number++)
    {
        printf("\n%d", number);
        if(number == 4)
        {
            break;
        }
    }

    // In Conclusion, in the first loop we did not see 4 as an output and in the second one, we saw 4 as we expected.
}