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

	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);

	i = get_op_func(argv[2])(n1, n2);
	
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (!(get_op_func(argv[2])))
	{
		printf("Error\n");
		exit(99);
	}
	
	printf("%i\n", i);

	return (0);
}
