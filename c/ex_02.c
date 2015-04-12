/* Define a function max_of_three() that takes three numbers as 
 * arguments and returns the largest of them. */

#include <stdio.h>

int 
max(int num1, int num2)
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

int 
max_of_three(int num1, int num2, int num3)
{
    int first_max = max(num1, num2);

    if (first_max > num3)
    {
        return first_max;
    }
    else
    {
        return num3;
    }
}

int 
main(void)
{
    int num1, num2, num3;

    printf("Please enter 3 numbers: ");
    scanf(" %d %d %d", &num1, &num2, &num3);

    printf("The largest of the three is %d\n", 
            max_of_three(num1, num2, num3));

    return 0;
}


