#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - funcion principal
 *
 *@argc: numero de argumentos
 *@argv: argumento
 *
 * Return: j
 **/

int main(int argc, char *argv[])
{
	int i, n1, n2;
	char *operator;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	operator = argv[2];
	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);
	if (operator[1] != '\0' || !(get_op_func(operator)))
	{
		printf("Error\n");
		exit(99);
	}
	if ((*operator == '/' || *operator == '%') && n2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	i = get_op_func(operator)(n1, n2);
	printf("%i\n", i);

	return (0);
}
