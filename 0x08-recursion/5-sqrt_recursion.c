#include "holberton.h"

/**
 * sqtRecursive - computes square root recursively doing binary search
 *
 * @init: primer numero
 * @fin: ultimo numero dentro del limite
 * @a: numero dado
 *
 * Return: 1 si no encuentra la funcion sino retorna la funcion
 */

int sqtRecursive(int init, int fin, int a)
{
long media;

if (fin >= init)
{
media = init + (fin - init) / 2;

if (media *media == a)
{
return (media);
}

if (media *media > a)
{
return (sqtRecursive(init, media - 1, a));
}

if (media *media < a)
{
return (sqtRecursive(media + 1, fin, a));
}
}
return (-1);
}

/**
 * _sqrt_recursion - finds the natural square root of a number
 *
 * @n: numero dado
 *
 * Return: raiz cuadrada de r
 **/

int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
if (n == 0 || n == 1)
{
return (n);
}
return (sqtRecursive(2, n, n));
}
