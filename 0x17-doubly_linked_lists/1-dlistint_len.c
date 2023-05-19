#include "lists.h"
#include <stdio.h>

/**
 * dlistint_len - finds elements in a linked dlistint_t list.
 * @h: pointer to the fist node
 *
 * Return: number of elements found
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}
