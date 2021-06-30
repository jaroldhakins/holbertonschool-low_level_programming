#include "holberton.h"

/**
 *swap_int - intercambia los valores de dos enteros
 *
 *@a: es un puntero
 *@b: es un puntero
 *
 * Return: no return
 */

void swap_int(int *a, int *b)
{
int aux;

aux = *a;
*a = *b;
*b = aux;
}
