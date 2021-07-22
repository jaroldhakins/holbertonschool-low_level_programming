#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - searches an integer
 *
 * @array: apunta al array
 * @size: numero de elementos en el array
 * @cmp: is a pointer to the function to be used to compare values
 *
 * Return: primer elemento de index o return -1
 **/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}

	}
	return (-1);
}
