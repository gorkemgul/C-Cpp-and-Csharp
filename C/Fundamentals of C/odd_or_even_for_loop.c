#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    - We're going to write a for loop that shows odd and even numbers from 0 to 10.
    - to do so, we have to decide which one we want at the beggining of the algorithm.
    - if decision = 1 -> it's going to show even numbers.
    - if decision = 2 -> then it's going to show odd nubmers.
    */
    // let's start by asking the decision of users.
    int i, decision;
    printf("Please enter your decision...\n");
    scanf("%d", &decision);
    if (decision == 1)
    {
        for (i = 0; i <= 10; i += 2)
        {
            printf("%d\n", i);
        }
    }
    else if (decision == 2)
    {
        for (i = 1; i <= 10; i += 2)
        {
            printf("%d\n", i);
        }
    }
}