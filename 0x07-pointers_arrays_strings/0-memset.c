#include "main.h"

/**
 * _memset - function fills the first n bytes of b to a destination
 * @s: pointer pointing to n
 * @b: constant varible
 * @n: int n
 * Return: A pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int current = 0;
while (current < n)
{
s[current] = b;
current++;
}
return (s);
}
