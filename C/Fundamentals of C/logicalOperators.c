#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* We're going to cover Logical Operators here.
    && || !
    */
    // in C programming, "&&" means and. Also, "||" means or. Lastly, "!" means not.
    // to have a deep understanding, let's see them in action.
    // let's create three variables called number1, number2 and number3.
    int number1, number2, number3;
    number1 = 5;
    number2 = 12;
    number3 = 13;
    // let's see how to use logical and in c.
    printf("%d\n", number1 > number2 && number1 < number3); // in this case, we're gonna get 0 (False). Because 5 isn't higher than 12. But the other operation returns 1 (True).
    // let's see how to use logical or in c now.
    printf("%d\n", number1 < number2 || number2 > number3); // although number2 is less than number3, we're still going to get 1 because of the first operation is 1 (True).
    // if we want to return the opposite of our result. We need to use not operator (!).
    printf("%d\n", !(number3 > number1 && number2 > number3)); // normally, we should get 0, as an output. But in this case we used not operator which is why we got 1 as a result.
}