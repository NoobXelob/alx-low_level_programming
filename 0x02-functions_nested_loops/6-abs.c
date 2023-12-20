#include "main.h"

/**
 * _abs - a function that computes the absolute value of an integer
 * @n: test param
 * Return: absolute value of provided signed integer
 */

int _abs(int n)
{
int x;
if (n < 0)
{
x = -n;
return (x);
}
return (n);
}
