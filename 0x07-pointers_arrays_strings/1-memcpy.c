#include "main.h"

/**
 * _memcpy - copy bytes from source to destination
 * @dest: destination which is a pointer
 * @src: source which is also a pointer
 * @n: represent target bytes
 * Return: A pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;
while (i < n)
{
dest[i] = src[i];
i++;
}
return (dest);
}
