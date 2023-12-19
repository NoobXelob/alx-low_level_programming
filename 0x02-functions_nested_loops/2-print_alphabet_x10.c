#include "main.h"

/**
 *  print_alphabet_x10 -  a function that prints 10 times the alphabet
 *  in lowercase, followed by a new line.
 *  Return: void
 */

void print_alphabet_x10(void)
{
int i;
char j;

i = 0;
j = 'a';
while (i <= 10)
{
for (; j <= 'z'; j++)
{
_putchar(j);
}
j = 'a';
_putchar('\n');
i++;
}
}
