#include "lists.h"
/**
 * sum_dlistint - sum of all the data (n) of a dlistint_t linked list.
 * @head: pointer to list
 * Return: 0 or the sum of all integers
 */
int sum_dlistint(dlistint_t *head)
{
	int result = 0;
	dlistint_t *new;

	if (head == NULL)
		return (result);
	new = head;
	while (new)
	{
		result += new->n;
		new = new->next;
	}
	return (result);
}
