#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - print the parameters
 *
 *@separator: string, printed between numbers
 *@n: number of parameters
 *
 * Return:no return
 **/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list(nums);
	va_start(nums, n);
	if (separator != NULL)
	{
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(nums, unsigned int));
			printf("%s", separator);
		}
	}
	printf("\n");
}
