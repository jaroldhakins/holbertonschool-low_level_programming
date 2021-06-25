#include "holberton.h"

/**
 * _isupper - retorna 1 si es mayuscula o 0 si es minuscula
 *
 *@c: is a integer
 *
 * Return: retorna 1 si es mayuscula o 0 si es minuscula
 */

int _isupper(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
else if (c >= 97 && c <= 122)
{
return (0);
}
return (c);
}
