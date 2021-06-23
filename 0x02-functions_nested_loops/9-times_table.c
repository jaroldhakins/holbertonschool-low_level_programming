#include "holberton.h"

/**
 * times_table - imprime las tablas de multiplicar
 * hasta el numero nueve
 *
 * Return: no retorna
 */

void times_table(void)

{

int h, v, r;

for (h = 0; h <= 9; h++)
{
_putchar(48);
for (v = 1; v <= 9; v++)
{
r = h * v;

_putchar(44);
_putchar(32);

if (r <= 9)
{
_putchar(32);
_putchar(r + 48);
}
else
{
_putchar((r / 10) + 48);
_putchar((r % 10) + 48);
}
}
_putchar('\n');
}
}
