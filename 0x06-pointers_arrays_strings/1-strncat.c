#include "holberton.h"

/**
 * *_strncat - concatena dos funciones
 *
 *@dest: puntero char
 *@src: puntero char
 *@n: es un entero
 *
 *Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
int i, j;

for (i = 0; dest[i]; i++)
{
}
for (j = 0; src[j]; j++)
{
if (j != n)
{
dest[i] = src[j];
}
i++;
}
dest[i] = 0;
return (dest); 
}
