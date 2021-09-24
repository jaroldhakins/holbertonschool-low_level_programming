#include "main.h"
/**
 * _strchr - localiza caracteres en un string
 * @s: array o string
 * @c: caracter
 * Return: NULL
 */
char *_strchr(char *s, char c)
{
	int a;

	for (a = 0; s[a] >= '\0'; a++)
	{
		if (s[a] == c)
			return (s + a);
	}
	return ('\0');
}
/**
 * _strspn - da el numero de bytes de lon
 * @s: string
 * @accept: puntero
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
			break;
	}
	return (i);
}
/**
 *_strpbrk - locates the first occurrence in the string
 *@s: string
 *@accept: string
 * Return: a pointer to the byte in s
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != 0; i++)
	{
		for (j = 0; accept[j] != 0; j++)
		{
			if (s[i] == accept[j])
				return (&s[i]);
		}
	}
	return ('\0');
}
/**
 * _strstr - a function that locates a substring
 * @haystack: locate a substring
 * @needle: substring to locate
 * Return: pointer to the beginning of the located substring,
 * or NULL, if substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *h = haystack;
	char *n = needle;

	while (*h)
	{
		n = needle;
		h = haystack;
		while (*n)
		{
			if (*h == *n)
			{
				n++;
				h++;
			}
			else
			{
				break;
			}
		}
		if (*n == '\0')
		{
			return (haystack);
			haystack++;
		}
	}
	return (0);
}
