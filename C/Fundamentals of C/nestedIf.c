#include <stdio.h>
#include <stdlib.h>

int main()
{
    // We're going to cover nested if statements.
    // Nested if: meaning one IF function inside of another, allows you to test multiple criteria and increases the number of possible outcomes.
    // Let's see how to create nested if statements.
    // let's take two inputs from user
    int number1, number2;
    printf("Please, enter two numbers.\n");
    scanf("%d %d", &number1, &number2);
    // let's create a nested if statement.
    if (number1 >= number2)
    {
        // nested if...
        if (number1 == number2)
        {
            printf("result: %d = %d", number1, number2);
        }

        else
        {
            printf("result: %d > %d", number1, number2);
        }
    }

    else
    {
        printf("result: %d < %d", number1, number2);
    }
}