#include "holberton.h"

/**
 *print_array - imprime los valores de un array
 *
 *@a: es un array
 *@n: is a integer
 *
 *Return: no return
 */

void print_array(int *a, int n)
{
int i;

for (i = 0; i < n; i++)
{
printf("%i", a[i]);
if (i != n - 1)
{
printf(", ");
}
}
printf("\n");
}
