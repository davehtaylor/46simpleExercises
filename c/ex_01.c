/* Define a function max() that takes two numbers as arguments and 
 * returns the largest of them. */

#include <stdio.h>

int max(int, int);

int main(void)
{
    int usernum_1, usernum_2;
    printf("Please enter 2 numbers: ");
    scanf(" %d %d", &usernum_1, &usernum_2);
    printf("The largest of the two is %d\n", max(usernum_1, usernum_2));
    return 0;
}

int max(int num1, int num2)
{
    if (num1 > num2)
    {
        return num1;
    }
    else
    {
        return num2;
    }
}
