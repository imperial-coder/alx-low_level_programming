#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: double pointer to the first node
 *
 * Return: the head node’s data (n)
 */
int pop_listint(listint_t **head)
{
	int copy;
	listint_t *temp = *head;

	if (!head || !*head)
		return (0);

	copy = temp->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (copy);
}
