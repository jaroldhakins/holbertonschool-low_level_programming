#include <stdio.h>
/**
 * print_diagsums - a function that prints the sum of the two diagonals
 * of a square matrix of integers
 *
 * @a: array bidimensional
 * @size: tamaño de la matriz
 *
 * Return: no return
 */
void print_diagsums(int *a, int size)
{
int i;
int x = 0;
int y = 0;
int s = size * size;

for (i = 0; i < s; i += size + 1)
{
x += a[i];
}

for (i = size - 1; i < s - 1; i += size - 1)
{
y += a[i];
}

printf("%d, %d\n", x, y);
}
