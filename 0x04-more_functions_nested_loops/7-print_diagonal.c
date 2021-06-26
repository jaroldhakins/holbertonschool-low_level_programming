#include "holberton.h"

/**
 * print_diagonal - imprime un slash el numero de veces que valga n
 *
 * @n: is a integer
 *
 * Return: no return
 */

void print_diagonal(int n)
{
char a, b;

if (n <= 0)
{
_putchar('\n');
}

for (a = 0; a < n; a++)
{
for (b = 0; b <= a; b++)
{
if (a == b)
{
_putchar(92);
_putchar('\n');
}
else
{
_putchar(' ');
}
}
}
}
