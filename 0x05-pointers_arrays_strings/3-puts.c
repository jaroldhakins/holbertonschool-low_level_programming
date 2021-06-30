#include "holberton.h"

/**
 *_puts - imprime un string
 *
 *@str: es un string
 *
 *Return: no return
 */

void _puts(char *str)
{
int n;
for (n = 0; str[n]; n++)
{
_putchar(str[n]);
}
_putchar('\n');
}
