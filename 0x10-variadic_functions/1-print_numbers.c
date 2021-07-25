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
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(nums, unsigned int));
		if (i < (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
}
