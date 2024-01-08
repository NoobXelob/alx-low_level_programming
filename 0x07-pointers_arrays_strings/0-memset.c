#include "main.h"

/**
 * _memset - function fills the first n bytes of the 
 * memory area pointed to by s 
 * with the constant byte b
 * @s : pointer pointing to n 
 * @b : constant varible
 * @n : int n
 * Return: A pointer to the memory  s 
 */

char *_memset(char *s, char b, unsigned int n)
{
int unsigned current= 0;

while (current < n)
{
s[current] = b;
current++;
}
return (s);
}
