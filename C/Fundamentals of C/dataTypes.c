#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
        int (4 bytes) | %d
        float (4 bytes) | %f
        double (8 bytes) | %lf
        char (1 byte) | %c

    */

    // first way of creating an integer
    int number0 = 10;
    printf("%d", number0);

    // another way of creating an integer
    int number1;
    number1 = 15;
    printf("\n%d", number1);

    // creating more than one integer
    int number2 = 5, number3 = 12;
    // or we could've written like this:
    // int number2, number3;
    // number2 = 5;
    // number3 = 12;
    printf("\n%d %d", number2, number3);

    // creating a float and a double
    float number4 = 5.12;
    double number5 = 8.15;
    printf("\nfloat:%f double:%lf", number4, number5);
    // we can specify the numbers after the dot
    printf("\nfloat:%.2f double:%.1lf", number4, number5);

    // let's create a character (it only takes one character!)
    char character = 'a';
    printf("\n%d", character);
}