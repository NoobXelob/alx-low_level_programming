#include <stdlib.h>
#include <stdio.h>

/**
 * main - a program that prints the alphabet in lowercase
 * followed by a new line and in a reverse order.
 * Return: Always 0 (Success)
 */

int main(void)
{
char letter;

letter = 'z';

while (letter >= 'a')
{
putchar(letter);
letter--;
}

putchar('\n');

return (0);
}
