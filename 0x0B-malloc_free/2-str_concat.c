#include "holberton.h"
#include <stdlib.h>
/**
 * *str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to new space in memory or null
 **/
char *str_concat(char *s1, char *s2)
{
	char *dup;
	int i, j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i] != '\0'; i++)
	{

	}
	for (j = 0; s2[j] != '\0'; j++)
	{

	}
	dup = malloc(sizeof(char) * (i + j + 1));
	if (dup == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		dup[i] = s1[i];
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		dup[i] = s2[j];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
