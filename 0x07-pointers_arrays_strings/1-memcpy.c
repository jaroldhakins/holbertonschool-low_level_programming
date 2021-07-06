#include "holberton.h"
/**
 * _memcpy - copia el area de memoria
 *@dest: puntero
 *@src: donde se copia
 *@n: numero de espacios
 *
 *Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
int a = 0, b = 0;

while (n > 0)
{
dest[a] = src[b];
a++;
b++;
n--;
}
return (dest);
}
