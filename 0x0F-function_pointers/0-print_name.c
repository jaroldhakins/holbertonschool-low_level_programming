#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - prints a name
 *
 *@name: apunta a un caracter
 *@f: apunta a una funcion
 *
 * Return: no return
 **/

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && *name != '\0' && f != NULL)
	{
		f(name);
	}
}
