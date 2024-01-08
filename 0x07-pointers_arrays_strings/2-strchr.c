#include <stdio.h>
#include "main.h"

/**
 * _strchr - pointer to the first occurrence of the character c
 * @s : pointer where character found will be store
 * @c : character we searching for
 * Return: A pointer or NULL
 */
char *_strchr(char *s, char c)
{
char *seen;
int i = 0;
for (; s[i] != '\0'; i++)
{
if (s[i] == c)
{
seen = &s[i];
return seen;
}
}
return (NULL);
}
