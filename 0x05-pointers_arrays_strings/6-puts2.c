#include "holberton.h"

/**
 *puts2 - imprime los caracteres de un string saltandose uno.
 *
 *@str: is a string
 *
 *Return: no return
 */

void puts2(char *str)
{
int i;

for (i = 0; str[i]; i += 2)
{
_putchar(str[i]);
}
_putchar('\n');
}
