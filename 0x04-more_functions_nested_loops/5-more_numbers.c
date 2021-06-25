#include "holberton.h"
/**
 * more_numbers - imprime los nums del 1 al 14 10 veces
 *
 * Return: no return
 */
void more_numbers(void)
{
int i;
char j;

for (i = 0; i < 10; i++)
{
for (j = 0; j <= 14; j++)
{
if (j > 9)
_putchar((j / 10) + '0');
_putchar((j % 10) + '0');
}
_putchar('\n');
}
}
