#include "main.h"
/**
 * _isdigit - si es un numero entre 0 y 9 retorna 1 sino retorna 0
 *@c: is a integer
 * Return: returna c
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
	return (c);
}
/**
 *_strlen - imprime la longitud de un string
 *@s: es un puntero
 *Return: el valor de len
 */

int _strlen(char *s)
{
	int len = 0;

	for (; *s != '\0'; s++)
	{
		len++;
	}
	return (len);
}
/**
 *_puts - imprime un string
 *@str: es un string
 *Return: no return
 */

void _puts(char *str)
{
	int n;

	for (n = 0; str[n]; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
/**
 *_strcpy - update value.
 *@dest: value to be evaluate.
 *@src: value to be evaluate.
 *Return: not.
 */
char *_strcpy(char *dest, char *src)
{
	int a;
	int b;

	for (a = 0; *(src + a) != '\0'; a++)
	{
	}
	for (b = 0 ; b < a ; b++)
	{
		dest[b] = src[b];
	}
	dest[a] = '\0';
	return (dest);
}
/**
 * _strcat - concatena dos arrays
 *@dest: es un array tipo puntero
 *@src: array puntero
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
