#include "holberton.h"

/**
 * print_triangle - imprime un triangulo
 *
 *@size: is a integer
 *
 * Return: no return
 */

void print_triangle(int size)
{
int fila, columna, a;

if (size <= 0)
_putchar('\n');
for (fila = 0; fila < size; fila++)
{
for (columna = size - fila; columna > 1; columna--)
_putchar(' ');
for (a = fila + columna; a >= 1; a--)
_putchar('#');
_putchar('\n');
}
}
