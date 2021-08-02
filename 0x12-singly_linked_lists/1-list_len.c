#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * list_len - finds the number of nodes in a list
 * @h: singly linked list
 * Return: number of elements in a linked list
 */
size_t list_len(const list_t *h)
{
	int a;
	char *s;
	const list_t *cop = NULL;

	cop = h;
	for (a = 0; cop; a++)
	{
		s = cop->str;
		if (s == NULL)
		{
			s = "(nil)";
		}
		cop = cop->next;
		}
	return (a);
}
