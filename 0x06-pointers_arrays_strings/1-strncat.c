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
int a, b;

for (a = 0; dest[a] != 0; a++)
{
}
for (b = 0; b < n && src[b] != 0;)
{
dest[a] = src[b];
a++;
b++;
}
dest[a] = '\0';
return (dest);
}
