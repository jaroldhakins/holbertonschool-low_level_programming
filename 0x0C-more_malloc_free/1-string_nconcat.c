#include "holberton.h"
#include <stdlib.h>

/**
 * *string_nconcat - concatenates two strings
 *
 * @s1: string 1
 * @s2: string 2
 * @n: limite del string 2
 *
 * Return: puntero a un nuevo espacioo NULL
 **/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	int i;
	unsigned int j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; *(s1 + i) != '\0'; i++)
	{

	}
	concat = malloc(sizeof(char) * (i + n + 1));
	if (concat == NULL)
	{
		return (NULL);
	}

	for (i = 0; *(s1 + i) != '\0'; i++)
	{
		concat[i] = s1[i];
	}

	for (j = 0; j < n && *(s2 + j) != '\0'; j++)
	{
		concat[i] = s2[j];
		i++;
	}
	concat[i] = '\0';
	return (concat);
}
