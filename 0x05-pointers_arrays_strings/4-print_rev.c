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
int n;

for (n = 0; s[n] != '\0'; n++)
{
}
for (n = n-1; n >= 0; n--)
{
_putchar(s[n]);
}
_putchar('\n');
}
