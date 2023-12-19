#include "main.h"

/**
 * _islower - a function that checks for lowercase character
 * @c - character to check if it is lower or upper case
 * Returns: 1 on lowercase , 0 on otherwise
 */

int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
return (0);
}
