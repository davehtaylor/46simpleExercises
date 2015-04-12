 /* "99 Bottles of Beer" is a traditional song in the United States and 
  * Canada. It is popular to sing on long trips, as it has a very repetitive 
  * format which is easy to memorize, and can take a long time to sing. The 
  * song's simple lyrics are as follows:
  *
  *      99 bottles of beer on the wall, 99 bottles of beer.
  *      Take one down, pass it around, 98 bottles of beer on the wall.
  *
  * The same verse is repeated, each time with one fewer bottle. The song is 
  * completed when the singer or singers reach zero.
  *
  * Write a program capable of generating all the verses of the song.
  */

#include <stdio.h>

int 
main(void)
{
    int i;

    for (i = 99; i > 0; i--)
    {
        printf("%d bottles of beer on the wall, %d bottles of beer.\n", i, i);
        printf("Take one down, pass it around, "
                "%d bottles of beer on the wall.\n\n", i - 1);
    }
    return 0;
}
