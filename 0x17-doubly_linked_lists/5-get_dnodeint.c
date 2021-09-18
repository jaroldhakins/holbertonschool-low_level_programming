#include "lists.h"
/**
 * get_dnodeint_at_index - returns the index node
 * @head: pointer to list
 * @index: iterador
 * Return: node or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int tam;
	dlistint_t *new;

	if (head == NULL)
		return (NULL);
	new = head;
	for (tam = 0; new != NULL; tam++)
	{
		if (tam == index)
		{
			return (new);
		}
		new = new->next;
	}
	return (NULL);
}
