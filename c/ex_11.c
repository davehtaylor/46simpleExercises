/* Define a function generate_n_chars() that takes an integer n and a
 * character c and returns a string, n characters long, consisting only 
 * of c:s. For example, generate_n_chars(5,"x") should return the 
 * string "xxxxx".
 */

#include <stdio.h>

void 
generate_n_chars(char input_char, int input_num)
{
    int i;

    for (i = 0; i < input_num; i++)
    {
        putchar(input_char);
    }
    putchar('\n');
}

int 
main(void)
{
    char userchar;
    int usernum;

    printf("Enter a character and a number: ");
    scanf(" %c %d", &userchar, &usernum);

    generate_n_chars(userchar, usernum);
    return 0;
}
