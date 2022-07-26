#include <stdio.h>
#include <stdlib.h>

int main()
{
    // In order to take an integer input from user, we use scanf.
    int number;
    // take a number from user.
    printf("Please enter a number\n");
    scanf("%d", &number);
    // let's see the output
    printf("\nThe number we've taken is: %d", number);

    // Now, let's take a float input from user, again we use scanf.
    float number1;
    // take a float from user
    printf("\nPlease enter a number\n");
    scanf("%f", &number1);
    // Let's print the float which's taken from the user.
    printf("\nThe float we've taken is: %f", number1);

    // Let's take another input from user but this time we're gonna take a double.
    double number2;
    // take a double from user
    printf("\nPlease enter a number\n");
    scanf("%lf", &number2);
    // Let's print the double...
    printf("\nThe double we've taken is: %lf", number2);

    // Last but not least, let's take a character from user.
    char character;
    // take a character from user
    printf("\nPlease enter a character\n");
    scanf("%c", &character);
    // let's see the character which is taken from the user.
    printf("\nThe character we've taken is: %c", character);
}