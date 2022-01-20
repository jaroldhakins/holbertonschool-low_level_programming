#include "search_algos.h"
/**
 * imprime - prints array from middle to start or end
 * @array: array when we're searching
 * @izq: start of the array
 * @der: end of the array
 * Return: nothing
 */
void imprime(int *array, unsigned int izq, unsigned int der)
{
unsigned int i;

printf("Searching in array: ");
for (i = izq; i < der; i++)
{
printf("%d, ", array[i]);
}
printf("%d\n", array[der]);
}
/**
 * binary_search - searches for a value in a sorted array
 * of integers using the Binary search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: index where value is located or -1 if not located
 */
int binary_search(int *array, size_t size, int value)
{
unsigned int izq = 0, der = size - 1;
int mid;

if (array == NULL)
return (-1);

while (der >= izq)
{
mid = (der + izq) / 2;
imprime(array, izq, der);
if (value == array[mid])
return (array[mid]);
else if (value > array[mid])
{
izq = mid + 1;
}
else if (value < mid)
{
der = mid;
}
}
return (-1);
}
