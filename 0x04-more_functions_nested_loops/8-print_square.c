#include "holberton.h"

/**
 * print_square - imprime un square
 *
 *@size: is a integer
 *
 * Return: no return
 */

void print_square(int size)
{
char a, b;

if (size <= 0)
{
_putchar('\n');
}
for (a = 0; a < size; a++)
{
for (b = 0; b < size; b++)
{
_putchar(35);
}
_putchar('\n');
}
}
