#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - free memory
 * @head: arg
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	if (head == NULL)
		return;
	free_listint(head->next);
	free(head);
}
