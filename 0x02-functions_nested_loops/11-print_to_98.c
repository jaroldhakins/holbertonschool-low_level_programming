#include <stdio.h>

/**
 * print_to_98 - imprime numeros desde num hasta 98
 *
 * @num: numero entero
 *
 * Return: no retorna nada
 */
void print_to_98(int num)
{
if (num < 98)
{
for (; num < 98; num++)
{
printf("%i, ", num);
}
}
else if (num > 98)
{
for (; num > 98; num--)
{
printf("%i, ", num);
}
}
printf("%i\n", num);
}
