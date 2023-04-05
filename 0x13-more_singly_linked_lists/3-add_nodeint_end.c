#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a linked list
 * @head: double pointer to the first node
 * @n: data for the new node
 *
 * Return: pointer to the first node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *temp = *head;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	/* creating first node if list is empty */
	if (!*head)
		*head = new_node;
	else
	{
		while (temp->next)
			temp = temp->next;

		temp->next = new_node;
		temp = new_node;
	}

	new_node = NULL;
	return (*head);
}
