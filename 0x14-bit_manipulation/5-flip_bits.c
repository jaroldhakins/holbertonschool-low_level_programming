#include "main.h"
/**
 * flip_bits - returns the number of bits
 * @n: decimal number
 * @m: number
 * Return: the number of bits changed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int index = sizeof(n) * sizeof(n) - 1;
	unsigned int total = 0;

	while (index >= 0)
	{
		if (((n ^ m) >> index) & 1)
		{
			total++;
		}
		index--;
	}
	return (total);
}
