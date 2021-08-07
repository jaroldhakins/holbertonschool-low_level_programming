#include "main.h"
/**
 * set_bit - sets bit at index to 1 at a given index
 * @n: pointer
 * @index: iterador
 * Return: 1 or -1 if fails
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
	{
		return (-1);
	}
	else
	{
		*n = *n | (1 << index);
	}
	return (1);
}
