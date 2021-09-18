#include "lists.h"
/**
 * insert_dnodeint_at_index - insert a new node
 * @h:struct
 * @idx: index
 * @n: Data
 * Return: new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 1;
	dlistint_t *new, *prev, *oft;

	if (h == NULL && idx > 0)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n, new->next = NULL, new->prev = NULL;
	if (idx == 0)
	{
		if (*h)
		{
			new->next = *h, (*h)->prev = new;
			*h = new;
		}
		else
			*h = new;
		return (new);
	}
	oft = (*h)->next;
	while (oft)
	{
		if (idx == i)
		{
			oft->prev->next = new, new->prev = oft->prev;
			new->next = oft, oft->prev = new;
			return (new);
		}
		i++;
		prev = oft;
		oft = oft->next;
	}
	if (oft == NULL && i == idx)
	{
		prev->next = new, new->prev = prev;
		return (new);
	}
	free(new);
	return (NULL);
}
