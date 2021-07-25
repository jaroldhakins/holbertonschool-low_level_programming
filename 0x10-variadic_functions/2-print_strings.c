#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - prints strings
 *
 * @separator: string to be printed between the strings.
 * @n:  is the number of strings passed to the function
 *
 * Return: no return.
 **/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *p;

	va_list(strings);
	va_start(strings, n);
	for (i = 0; i < n; i++)
	{
		p = va_arg(strings, char *);
		if (p  == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", p);
			if (i < n - 1 && separator != NULL)
			{
				printf("%s", separator);
			}
		}
	}
	va_end(strings);
	printf("\n");
}
