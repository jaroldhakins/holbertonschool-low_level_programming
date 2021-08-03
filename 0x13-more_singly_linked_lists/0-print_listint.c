#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: -
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t i;

	for (i = 0; h != NULL;)
	{
		printf("%i\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
