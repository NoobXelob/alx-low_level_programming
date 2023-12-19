#include <stdlib.h>
#include <stdio.h>

/**
 * main - a program that prints all possible combinations
 * of single-digit numbers.Numbers must be separated by ,,
 * followed by a space Numbers should be printed in ascending order
 * Return: Always 0 (Success)
 */

int main(void)
{
int minx;

minx = 0;

while (minx < 10)
{
if (minx != 9)
{
putchar(minx + '0');
putchar(',');
putchar(' ');
minx++;
}
}
putchar('\n');

return (0);
}
