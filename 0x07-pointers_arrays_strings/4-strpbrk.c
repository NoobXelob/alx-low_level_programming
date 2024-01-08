#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - function locates the first occurrence in the string
 * @s: searchable string
 * @accept: string we will be searching for
 * Return: A pointer to the first occurence
 */
char *_strpbrk(char *s, char *accept)
{
int i = 0;
int j = 0;
for (; s[i] != '\0'; i++)
{
for (; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
return (s + i);
}
}
j = 0;
}
return (NULL);
}
