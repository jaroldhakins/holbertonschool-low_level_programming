#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"
/**
 * binary_to_uint - converts to a binary number to unsigned int
 * @b: pointer to string
 * Return: unsigned int total or 0
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int pot = 1;
	unsigned int total = 0;
	unsigned int entero = 0;

	for (i = strlen(b) - 1; b[i]; i--)
	{
		if (!b)
		{
			return (0);
		}
		if (b[i] == '0' ||  b[i] == '1')
		{
			entero = (b[i] - 48);
			total += entero * pot;
			pot *= 2;
		}
		else
		{
			return (0);
		}
	}
	return (total);
}
