#include <stdio.h>
#include <stdlib.h>
#define pi 3.14

int main()
{
    // We use the const qualifier to declare a variable as constant. That means that we cannot change the value once the variable has been initialized.
    // Also, define is a preprocessor directive that is used to define macros in a C program.
    const int number = 10;
    // number = 12;
    printf("%d\n", number);
    printf("%.2f", pi);
}