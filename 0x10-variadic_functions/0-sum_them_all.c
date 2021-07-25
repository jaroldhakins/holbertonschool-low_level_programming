#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"
/**
 * sum_them_all - add all numbers
 *
 *@n: total de parametros a pasar
 *
 * Return: returna el total de la suma o 0
 **/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int total, suma;

	va_list(parameters);
	va_start(parameters, n);

	if (n == 0)
	{
		return (0);
	}

	total = 0;

	for (i = 0; i < n; i++)
	{
		suma = va_arg(parameters, int);
		total += suma;
	}
	va_end(parameters);
	return (total);
}
