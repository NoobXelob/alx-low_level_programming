#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - This program will assign a random number to the variable
 * n each time it is executed. The variable n will store a different
 * value every time you run this program.
 * Return: Always 0 (Success)
 */

int main(void)
{
int n;
int digit;

srand(time(0));
n = rand() - RAND_MAX / 2;

digit = n % 10;

if (n > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, digit);
}
else if (n == 0)
{
printf("Last digit of %d is %d and is 0\n", n, digit);
}
else
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, digit);
}

return (0);
}
