#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - writes character c  to the standard output
 * @a: A pointer of the array
 * @size: size of the matrix
 * Return: Nothing
 */
void print_diagsums(int *a, int size)
{
int sum_primary = 0;
int sum_secondary = 0;
int i = 0;
int n = 0;
for (; i <= (size * size); i = i + size + 1)
{
sum_primary += a[i];
}

for (n = size - 1; n <= (size * size) - size; n = n + size - 1)
{
sum_secondary += a[n];
}
printf("%d, %d\n", sum_primary, sum_secondary);
}
