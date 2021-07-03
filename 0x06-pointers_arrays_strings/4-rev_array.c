#include "holberton.h"
/**
 *reverse_array - voltea el string
 *
 *@a: puntero
 *@n: entero
 *
 *Return: no return
 */
void reverse_array(int *a, int n)
{
int b, aux;

for (b = 0; b < n--; b++)
{
aux = a[b];
a[b] = a[n];
a[n] = aux;
}
}
