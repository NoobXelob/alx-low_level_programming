#include <stdio.h>
#include "main.h"
/**
 * _strstr - finds the first occurrence of the substring needle  haystack
 * @haystack: The string to be searched
 * @needle: The substring to search for
 * Return: A pointer to the beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
if (*needle == '\0')
{
return (haystack);
}
while (*haystack != '\0')
{
char *h = haystack;
char *n = needle;
while (*n != '\0' && *h == *n)
{
h++;
n++;
}
if (*n == '\0')
{
return (haystack);
}
haystack++;
}
return (NULL);
}
