#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index index of a
 * dlistint_t linked list.
 * @head: double pointer to the first node
 * @index: index of the node to be deleted. Index starts at 0
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *temp = *head;

	if (*head == NULL)
		return (-1);
	else if (!(*head)->next)
	{
		free(*head);
		*head = NULL;
	}
	else if (index == 0)
	{
		*head = temp->next;
		(*head)->prev = NULL;
		free(temp);
	}
	else
	{
		for (i = 0; i < index; i++)
		{
			if (temp)
				temp = temp->next;
			else
				return (-1);
		}
		if (temp->next)
			temp->next->prev = temp->prev;
		temp->prev->next = temp->next;
		free(temp);
	}

	return (1);
}
