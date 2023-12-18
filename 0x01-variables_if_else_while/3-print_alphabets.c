#include <stdlib.h>
#include <stdio.h>

/**
 * main -a program that prints the alphabet in lowercase
 * and then in uppercase, followed by a new line.
 * followed by a new line.
 * Return: Always 0 (Success)
 */

int main(void)
{
	char lowercx;
	char uppercx;

	for (lowercx = 'a'; lowercx <= 'z'; lowercx++)
	{
		putchar(lowercx);
	}

	for (uppercx = 'A'; uppercx <= 'Z'; uppercx++)
	{
		putchar(uppercx);
	}

	putchar('\n');

	return (0);
}
