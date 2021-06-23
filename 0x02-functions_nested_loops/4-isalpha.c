#include "holberton.h"

/**
 * _isalpha - muestra 1 para letras 0 para otros
 *
 * @c: The character in ASCII code
 *
 * Return: 1 para letras. Returns 0 para otros
 */
int _isalpha(int c)
{
if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
