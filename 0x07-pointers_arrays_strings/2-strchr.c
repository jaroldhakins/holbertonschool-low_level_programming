#include "holberton.h"
#include <stddef.h>
/**
 * _strchr - localiza caracteres en un string
 * @s: array o string
 * @c: caracter
 *
 * Return: un puntero a un caracter
 */
char *_strchr(char *s, char c)
{
int a;

for (a = 0; s[a] != 0; a++)
{
if (s[a] == c)
{
return (&s[a]);
}
}
return (0);
}
