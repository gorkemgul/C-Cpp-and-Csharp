#include <stdio.h>
#include <stdlib.h>

int main()
{
    // We're going to do an example about scanf and printf to be able to find out more about them.
    // - We're going to take 3 inputs from user. Two of them will be numbers and the other one will be a character of the name of the user.

    // take the first number from the user
    int number1;
    printf("Please enter a number...\n");
    scanf("%d", &number1);

    // take the second number from the user
    int number2;
    printf("\nPlease enter another number...\n");
    scanf("%d", &number2);

    // take the first char of the name of the user
    char first_char;
    printf("\nPlease enter the first char of your name...\n");
    scanf(" %c", &first_char);

    // let's show what've taken from the user so far
    printf("\nThe first number you've entered is: %d \nThe second number you've entered is: %d \nThe char you've entered is: %c", number1, number2, first_char);
}