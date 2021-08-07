#include "main.h"
/**
 * clear_bit -  sets the value of a bit to 0 at a given index.
 * @n: pointer
 * @index: index
 * Return: 1 or -1 if one error ocurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	*n = *n & ~(1 << index);
	if (index > 64)
		return (-1);
	else
		return (1);
}
