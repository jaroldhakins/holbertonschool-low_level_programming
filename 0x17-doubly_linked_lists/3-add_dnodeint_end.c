#include "lists.h"
/**
 * add_dnodeint_end - adds node at the end
 * @head: struct
 * @n: Data
 * Return: new_node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
    dlistint_t *new_node, *new2;

    new_node = malloc(sizeof(dlistint_t));
    if (new_node == NULL)
        return (NULL);
    new_node->n = n;
    new_node->next = NULL;
    new_node->prev = NULL;

    if (*head == NULL)
    {
        *head = new_node;
        return (new_node);
    }
    if ((*head)->next == NULL)
    {
        (*head)->next = new_node;
        new_node->prev = *head;
        return (new_node);
    }
    new2 = *head;
	while (new2->next)
	new2 = new2->next;
	new2->next = new_node;
	new_node->prev = new2;
	return (new_node);
}
