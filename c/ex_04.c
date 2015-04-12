/* Write a function that takes a character and returns True if it 
 * is a vowel, False otherwise. */

#include <stdio.h>
#include <stdbool.h>

bool 
is_vowel(char input)
{
    if (input == 'a' ||
        input == 'e' ||
        input == 'i' ||
        input == 'o' ||
        input == 'u')
    {
        return true;
    }
    else
    {
        return false;
    }
}

int 
main(void)
{
    char letter;

    printf("Please enter a letter to discover if it is a vowel: ");
    scanf(" %c", &letter);
    if (is_vowel(letter) == true)
    {
        printf("That's a vowel\n");
    }
    else
    {
        printf("No, that's not a vowel\n");
    }

    return 0;
}


