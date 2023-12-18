#include <stdlib.h>
#include <stdio.h>

/**
 * main - a program that prints all single digit numbers of
 * base 10 starting from 0, followed by a new line.
 * followed by a new line.
 * Return: Always 0 (Success)
 */

int main(void)
{
int baseten;

baseten = 0;

while  (baseten < 10)
{
putchar(baseten);
baseten++;
}
putchar('\n');
return (0);
}
