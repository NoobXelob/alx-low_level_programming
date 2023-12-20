#include "main.h"

/**
 * print_sign - a function that prints sign of a number
 * @n: parameter integer
 * Return: returns 1 if gt than 0, -1 ls 0 and 0 if 0
 */

int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
