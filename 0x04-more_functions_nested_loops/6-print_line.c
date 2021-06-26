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
char p;

for (p = 0; p < n; p++)
{
_putchar('_');
}
  _putchar('\n');
}
