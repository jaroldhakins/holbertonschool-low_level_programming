#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_op_func - function that selects correct function
 *
 *@s: operador pasado como argumento
 *
 * Return: puntero a una funcion
 **/
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
		
	};
	int i = 0;

	while (i <= 4)
	{
		if (*ops[i].op == *s)
		{
			return (ops[i].f);
		}
		i++;

		
	}

	return (NULL);
	
}
