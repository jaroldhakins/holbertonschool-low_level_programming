#include "holberton.h"
/**
 * _islower - Muestra 1 si es minuscula, 0 si es otro.
 *
 * @c: The character in ASCII code
 *
 * Return: 1 para minuscula, 0 para el resto
 */
int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
