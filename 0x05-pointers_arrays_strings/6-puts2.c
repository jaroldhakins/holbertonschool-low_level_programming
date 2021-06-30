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
int aux = 0;
char *p = str;
int i;

while (*p != '\0')
{
p++;
aux++;
}
for (i = 0; str[i]; i += 2)
{
_putchar(str[i]);
}
_putchar('\n');
}
