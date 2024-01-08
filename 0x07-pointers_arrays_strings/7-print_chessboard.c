#include "main.h"

/**
 * print_chessboard - Prints the 2D array representing a chessboard
 * @a: Pointer to a 2D array (8x8) representing the chessboard
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
int i = 0;
int j = 0;

while (i < 8)
{
while (j < 8)
{
_putchar(a[i][j]);
j++;
}
_putchar('\n');
j = 0;
i++;
}}
