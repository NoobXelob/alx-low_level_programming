#include "main.h"

/**
 * _strspn - function that gets the length of the prefix
 * @s: Apointer of the original text
 * @accept:  A pointer of the prefix
 * Return: Always the number (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
int i = 0;
int j = 0;
int k = 0;
while (s[j] != '\0')
{
for (; accept[k] >= '\0'; k++)
{
if (s[j] == accept[k])
{
i++;
k = 0;
break;
}
}
j++;
}
return (i);
}
