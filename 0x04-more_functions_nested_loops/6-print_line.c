#include "holberton.h"

/**
 * print_line - imprime un guion
 * dependiendo de cuanto valga n.
 *
 * @n: is a integer
 *
 * Return: no return
 */

void print_line(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else if (n == 2)
{
for (n = 0; n < 2; n++)
{
_putchar('_');
}
_putchar('\n');
}
else
{
for (n = 0; n < 10; n++)
{
_putchar('_');
}
_putchar('\n');
}
}
