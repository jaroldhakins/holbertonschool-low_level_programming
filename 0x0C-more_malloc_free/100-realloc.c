#include <stdlib.h>
#include "holberton.h"
/**
 * *_realloc -  reallocates a memory block using malloc and free
 *
 * @ptr: puntero
 * @old_size: memoria ya alocada
 * @new_size: memoria nueva
 *
 * Return: pointer a nueva memoria
 **/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned char *n;
	unsigned int i;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		ptr = malloc(new_size * sizeof(void *));
		if (ptr == NULL)
			return (NULL);
		return (ptr);
	}
	n = malloc(new_size * sizeof(char));
	if (n == NULL)
	{
		return (NULL);
	}
	i = 0;
	if (new_size > old_size)
	{
		for (; i < old_size; i++)
		{
			n[i] = ((char *)ptr)[i];
		}
		free(ptr);
		return (n);
	}
	for (; i < new_size; i++)
	{
		n[i] = ((char *)ptr)[i];
	}
	free(ptr);
	return (n);
}
