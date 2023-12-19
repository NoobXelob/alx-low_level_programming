#include <stdlib.h>
#include <stdio.h>

/**
 * main -  a program that prints all the numbers of
 * base 16 in lowercase, followed by a new line.
 * Return: Always 0 (Success)
 */

int main(void)
{
	int nums;
	char alpha;

	nums = 0;
	alpha = 'a';

	for (; nums < 10; nums++)
	{
		putchar(nums + '0');
	}

	for (; alpha <= 'f'; alpha++)
	{
		putchar(alpha);
	}

	putchar('\n');

	return (0);
}
