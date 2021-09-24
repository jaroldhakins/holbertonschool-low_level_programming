#include "main.h"
/**
 * _strncat - concatena dos funciones
 *@dest: puntero char
 *@src: puntero char
 *@n: es un entero
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
/**
 * *_strncpy - copia un string
 * @dest: puntero
 * @src: puntero
 * @n: entero
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
/**
 * _strcmp - compare two strings
 * @s1: puntero
 * @s2: puntero
 * Return: 0 or s1 - s2
 */
int _strcmp(char *s1, char *s2)
{
	int a;

	for (a = 0; s1[a] != '\0' && s2[a] != '\0'; a++)
	{
		if (s1[a] != s2[a])
			return (s1[a] - s2[a]);
	}
	return (0);
}
/**
 *_memset - fill a block of memory with a specific value
 *@s: starting address of memory to be filled
 *@b: the desired value
 *@n: number of bytes to be changed
 *Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int a = 0;

	for (; n > 0; n--)
	{
		s[a] = b;
		a++;
	}
	return (s);
}
/**
 * _memcpy - copia el area de memoria
 *@dest: puntero
 *@src: donde se copia
 *@n: numero de espacios
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
