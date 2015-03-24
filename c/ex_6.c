#include <stdio.h>

int sum(int, int, int, int);
int multiply(int, int, int, int);

int main(void)
{
    int user_selection;
    int usernum_1, usernum_2, usernum_3, usernum_4;

    printf("Would you like to add or multiply?\n");
    printf("1. Add\n");
    printf("2. Multiply\n");
    printf("Your Selection: ");
    scanf(" %d", &user_selection);

    printf("Enter four numbers: ");
    scanf(" %d %d %d %d", &usernum_1, &usernum_2, &usernum_3, &usernum_4);
    
    if (user_selection == 1)
    {
        printf("The sum of the numbers is %d\n",
                sum(usernum_1, usernum_2, usernum_3, usernum_4));
    }
    else 
    {
        printf("The product of the numbers is %d\n",
                multiply(usernum_1, usernum_2, usernum_3, usernum_4));
    }

    return 0;
}

int sum(int input_1, int input_2, int input_3, int input_4)
{
    int total = input_1 + input_2 + input_3 + input_4;
    return total;
}

int multiply(int input_1, int input_2, int input_3, int input_4)
{
    int total = input_1 * input_2 * input_3 * input_4;
    return total;
}
