#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main	- This program will assign a random number to the variable n
 * each time it is executed
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive", n);
	}

	if (n == 0)
	{
		printf("\n%d is zero", n);
	}

	if (n < 0)
	{
		printf("\n%d is negative", n);
	}

	return (0);
}
