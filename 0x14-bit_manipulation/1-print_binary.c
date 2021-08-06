#include <stdio.h>
#include "main.h"
/**
 * print_binary - check the code
 * @n: long int
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	int i, op;

	if (n == 0)
		_putchar('0');
	for (op = 0, i = sizeof(n) * 8 - 1; i >= 0; i--)
	{
		if ((n >> i) & 1)
			op = 1;
		if (op == 1)
			((n >> i) & 1) ? _putchar('1') : _putchar('0');
	}
}
