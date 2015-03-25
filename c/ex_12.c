/* Define a procedure histogram() that takes a list of integers and prints 
 * a histogram to the screen. For example, histogram(4, 9, 7) should 
 * print the following:
 *
 * ****
 * *********
 * *******
 *
 */

#include <stdio.h>

void histogram(int);

int main(void)
{
    int i;
    int usernum_1, usernum_2, usernum_3;

    printf("Please enter 3 numbers: ");
    scanf(" %d %d %d", &usernum_1, &usernum_2, &usernum_3);

    int numbers[3] = {usernum_1, usernum_2, usernum_3};

    for (i = 0; i < 3; i++)
    {
        histogram(numbers[i]);
    } 

    return 0;
}

void histogram(int input_num)
{
    int i;
    for (i = 0; i < input_num; i++)
    {
        putchar('*');
    }
    putchar('\n');
} 
