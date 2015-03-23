#include <stdio.h>

int max_of_three(int, int, int);

int main(void)
{
    int num1, num2, num3;
    printf("Please enter 3 numbers: ");
    scanf(" %d %d %d", &num1, &num2, &num3);
    printf("The largest of the three is %d\n", 
            max_of_three(num1, num2, num3));

    return 0;
}

int max_of_three(int num1, int num2, int num3)
{
    int first_max;

    if (num1 > num2)
    {
        first_max = num1;
    }
    else
    {
        first_max = num2;
    }

    if (first_max > num3)
    {
        return first_max;
    }
    else
    {
        return num3;
    }
}
