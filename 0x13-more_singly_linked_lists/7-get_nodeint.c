#include "lists.h"

/**
 * get_nodeint_at_index - get nth node of a linked list
 * @head: pointer to the first node
 * @index: nth node to get
 *
 * Return: the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *temp = head;

	while (temp && count < index)
	{
		temp = temp->next;
		count++;
	}

	return (temp ? temp : NULL);
}
