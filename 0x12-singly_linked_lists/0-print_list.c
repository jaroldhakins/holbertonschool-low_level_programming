#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * print_list - imprime todos los elementos de la lista list_t
 * @h: recibe la lista para imprimir
 * Return: numero de nodos en la lista
 */
size_t print_list(const list_t *h)
{
	size_t a;

	for (a = 0; h != NULL; a++)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%i] %s\n", h->len, h->str);
		}
		h = h->next;
	}
	return (a);
}
