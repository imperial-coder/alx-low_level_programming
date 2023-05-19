#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: double pointer to the first node
 * @n: data of the new node
 *
 * Return: pointer to the first node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *temp;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
	{
		free(new_node);
		return (NULL);
	}
	new_node->prev = NULL;
	new_node->n = n;
	new_node->next = NULL;

	if (!*head)
		*head = new_node;
	else
	{
		temp = *head;
		while (temp->next)
			temp = temp->next;
		new_node->prev = temp;
		temp->next = new_node;
	}

	new_node = NULL;
	free(new_node);

	return (*head);
}
