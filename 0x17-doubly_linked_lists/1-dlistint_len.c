#include "lists.h"
/**
 * dlistint_len - count the elements in a list
 * @h: pointer to head
 * Return: size of the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t tam;

	if (h == NULL)
		return (0);
	for (tam = 0; h != NULL; tam++)
	{
		h = h->next;
	}
	return (tam);
}
