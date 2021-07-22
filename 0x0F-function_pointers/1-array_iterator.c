#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - function executes a function on array
 *
 * @array: apunta al array
 * @size: numero de elementos en el array
 * @action: apunta a la funcion
 *
 * Return: no return
 **/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && size > 0 && action != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
