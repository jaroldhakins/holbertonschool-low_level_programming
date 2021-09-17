#include "lists.h"
/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: pointer to head
 * Return: size of the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t tam;

	if (h == NULL)
		return (0);
	for (tam = 0; h != NULL; tam++)
	{
		printf("%i\n", h->n);
		h = h->next;
	}
	return (tam);
}
