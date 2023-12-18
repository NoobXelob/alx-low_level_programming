#include <stdlib.h>
#include <stdio.h>

/**
 * main -a program that prints the alphabet in lowercase
 * followed by a new line.
 * ll the letters except q and e
 * followed by a new line.
 * Return: Always 0 (Success)
 */

int main(void)
{
        char lowercx;

        for (lowercx = 'a'; lowercx <= 'z'; lowercx++)
        {
               if (lowercx != 'q' &&  lowercx != 'e')
	       {
		       putchar(lowercx);
	       }
        }

	putchar('\n');

	return (0);
}

