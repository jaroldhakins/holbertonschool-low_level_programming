#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * get_bit - check the code
 * @n: unsigned int long
 * @index: is the index, starting from 0 of the bit you want to get
 * Return: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (8 * sizeof(n) - 1))
	{
		return (-1);
	}
	else
	{
		return ((int)(n >> index) & 1);
	}
}
