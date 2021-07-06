#include "holberton.h"

/**
 * _strspn - da el numero de bytes de lon
 *
 * @s: string
 * @accept: puntero
 *
 * Return: numero de bytes de lon
 */

unsigned int _strspn(char *s, char *accept)
{
int a, b;
unsigned int lon;

lon = 0;

for (a = 0; s[a] != '\0'; a++)
{
for (b = 0; accept[b] != '\0' && accept[b] != s[a]; b++)
{
if (s[a] == accept[b])
{
lon++;
}
if (accept[b] == '\0')
{
return (lon);
}
}
}
return (lon);
}
