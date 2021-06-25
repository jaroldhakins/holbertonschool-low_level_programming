#include "holberton.h"

/**
 * _isdigit - si es un numero entre 0 y 9 retorna 1 sino retorna 0
 *
 *@c: is a integer
 *
 * Return: returna c
 */

int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
else
{
return (0);
}
return (c);
}
