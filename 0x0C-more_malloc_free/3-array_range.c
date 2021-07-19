#include "holberton.h"
#include <stdlib.h>

/**
 * *array_range - creates an array of integers
 *
 *@min: numero minimo
 *@max: numero maximo
 *
 * Return: array ptr
 **/

int *array_range(int min, int max)
{
	int *ptr, i, tam;

	if (min > max)
	{
		return (NULL);
	}
	tam = max;
	ptr = malloc(tam * sizeof(*ptr));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < tam && min <= max; i++, min++)
	{
		ptr[i] = min;
	}
	return (ptr);
}
