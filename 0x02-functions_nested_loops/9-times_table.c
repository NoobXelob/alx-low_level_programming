#include "main.h"

/**
 * times_table - function that prints 9 times table
 * Return: void always
 */

void times_table(void)
{
int s;
int e;
int r;

for (s = 0; s <= 9; s++)
{
for (e = 0; e <= 9; e++)
{
r = s * e;
_putchar(' ');
if (r > 9)
{
_putchar((r / 10) + '0');
_putchar((r % 10) + '0');;
}
else
{
_putchar(' ');
_putchar(r + '0');
}
if (e != 9)
{
_putchar(',');
}
}
_putchar('\n');
}
}

