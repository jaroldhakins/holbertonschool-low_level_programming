#include <stdlib.h>
/**
 * *_calloc - allocates memory for an array, using
 *
 * @nmemb: entero
 * @size: tamaño
 *
 * Return: Erin.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *Erin;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	Erin = malloc(nmemb * size);
	if (Erin == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < nmemb * size; i++)
	{
		*(Erin + i) = 0;
	}
	return ((void *)Erin);
}
