#include "holberton.h"
/**
 * _strcmp - compara los valores de
 * dos strings
 *
 * @s1: puntero
 * @s2: puntero
 *
 * Return: s1[i] - s2[i]
 */
int _strcmp(char *s1, char *s2)
{
int a;

for (a = 0; s1[a] != '\0' && s2[a] != '\0'; a++)
{
if (s1[a] != s2[a])
{
return (s1[a] - s2[a]);
}
}
return (0);
}
