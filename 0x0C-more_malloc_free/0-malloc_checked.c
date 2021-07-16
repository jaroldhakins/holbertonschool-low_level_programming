#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *malloc_checked - allocates memory using malloc.
 *
 *@b: entero sin signo
 *
 * Return: a pointer to the allocated memory
 **/

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
