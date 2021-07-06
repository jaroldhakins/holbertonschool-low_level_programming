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
unsigned int i, j;
int bool;

for (i = 0; s[i] != '\0'; i++)
{
bool = 1;
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
bool = 0;
break;
}
}
if (bool == 1)
{
break;
}
}
return (i);
}
