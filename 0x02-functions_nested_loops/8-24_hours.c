#include "holberton.h"
/**
 * jack_bauer - imprime todos los minutos del dia
 *
 * Return: como la funcion es de tipo void no retorna nada
 */
void jack_bauer(void)
{
int i, j, k, l;

for (i = 48; i <= 50; i++)
{
for (j = 48; j <= 57; j++)
{
for (k = 48; k <= 53; k++)
{
for (l = 48; l <= 57; l++)
{
if (i >= 50 && j >= 52)
{
break;
}
_putchar(i);
_putchar(j);
_putchar(':');
_putchar(k);
_putchar(l);
_putchar('\n');
}
}
}
}
}
