#include "lists.h"

/**
 * get_dnodeint_at_index - find the nth node of a dlistint_t linked list
 * @head: pointer to hte first node
 * @index:  index of the node, starting from 0
 *
 * Return: nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *temp;

	temp = head;
	for (i = 0; i < index; i++)
	{
		if (temp->next)
			temp = temp->next;
		else
			return (NULL);
	}

	return (temp);
}
