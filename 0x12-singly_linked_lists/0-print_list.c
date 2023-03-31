#include "lists.h"
#include <stdio.h>

/**
 * print_list -  prints all the elements of a list_t list
 * @h: pointer to the first node of the linked list
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	unsigned int i = 0;

	while (h)
	{
		if (!h->str)
			printf("[%d] (nil)\n", h->len);
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		i++;
	}

	return (i);
}
