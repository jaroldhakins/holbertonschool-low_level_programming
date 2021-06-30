#include "holberton.h"

/**
*print_rev - imprime un string al reves
*
*@s: es un string
*
*Return: no return
*/

void print_rev(char *s)
{
int n, a;

for (n = 0; s[n] != '\0'; n++)
{
}
for (a = n; a >= 0; a--)
{
_putchar(s[a]);
}
_putchar('\n');
}
