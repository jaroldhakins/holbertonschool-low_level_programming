#include "holberton.h"
/**
 * *_strncpy - copia un string
 *
 * @dest: puntero
 * @src: puntero
 * @n: entero
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int a = 0;

for (; a < n && src[a] != '\0';)
{
dest[a] = src[a];
a++;
}
for (; a < n;)
{
dest[a] = '\0';
a++;
}
return (dest);
}
