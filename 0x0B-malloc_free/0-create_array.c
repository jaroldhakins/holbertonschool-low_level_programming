#include "holberton.h"
#include <stdlib.h>

/**
 * *create_array - creates an array of chars, and initializes.
 *
 *@size: tamaño del array
 *@c: caracter
 *
 * Return: puntero a un array, '\0'
 **/

char *create_array(unsigned int size, char c)
{
	char *string;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	string = malloc(sizeof(char) * size);
	if (string == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		string[i] = c;
		i++;
	}
	return (string);
}
