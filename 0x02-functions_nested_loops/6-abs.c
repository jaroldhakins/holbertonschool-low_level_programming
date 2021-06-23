#include "holberton.h"

/**
 * _abs - retorna el valor absoluto
 *
 * @num: es un entero
 *
 * Return: valor absoluto de un numero
 */
int _abs(int num)
{
if (num >= 0)
{
return (num);
}
else
{
return (num * -1);
}
}
