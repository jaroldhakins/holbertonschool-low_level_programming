#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * pop_listint - pops off the head of the list and returns its contents
 * @head: head of the list
 * Return: contenido de head
 */
int pop_listint(listint_t **head)
{
	int i;
	listint_t *act, *p;

	if (head == NULL)
		return (0);
	p = act = *head;
	if (*head)
	{
		i = act->n;
		*head = act->next;
		free(p);
	}
	else
	{
		i = 0;
	}
	return (i);
}
