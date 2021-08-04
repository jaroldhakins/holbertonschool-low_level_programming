#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: lugar actual
 * @n: integer
 * Return: pointer to current position
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *act;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}
	act = *head;
	while (act->next != NULL)
	{
		act = act->next;
	}
	act->next = new_node;
	return (*head);
}
