#include "holberton.h"

/**
 * *_strcat - concatena dos arrays
 *
 *@dest: es un array tipo puntero
 *@src: array puntero
 *
 *Return: dest
 */

char *_strcat(char *dest, char *src)
{
int a, b;

for (a = 0; dest[a] != 0; a++)
{
}
for (b = 0; src[b]; b++)
{
dest[a] = src[b];
a++;
}
dest[a] = 0;
return (dest);
}
