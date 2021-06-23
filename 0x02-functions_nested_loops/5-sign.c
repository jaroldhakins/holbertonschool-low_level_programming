#include "holberton.h"
/**
 *print_sign - determina si n es
 *mayor, igual o menor que cero
 *
 *@n: es un entero
 *
 *Return: 1 si n es mayor que cero
 *0 si n es igual a cero, -1 si n es menor que cero.
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar(43);
return (1);
}
else if (n == 0)
{
_putchar(48);
return (0);
}
else
{
_putchar(45);
return (-1);
}
_putchar('\n');
}
