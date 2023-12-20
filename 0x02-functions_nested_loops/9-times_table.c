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
if (r > 9)
{
_putchar(44);
_putchar(32);
_putchar((r / 10) + '0');
_putchar((r % 10) + '0');
}
else
{
if (e != 0)
{
_putchar(44);
_putchar(32);
_putchar(32);
}
_putchar(r + '0');
}
}
_putchar('\n');
}
}
