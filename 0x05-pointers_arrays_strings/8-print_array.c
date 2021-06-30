#include "holberton.h"

/**
 *print_array - imprime los valores de un array
 *
 *@a: is a pointer
 *@n: is a integer
 *
 *Return: no return
 */

void print_array(int *a, int n)
{
int i;

for (i = 0; i < n; i++)
{
if (i == 4)
{
printf("%i\n", a[i]);
}
else
{
printf("%i, ", a[i]);
}
}
}
