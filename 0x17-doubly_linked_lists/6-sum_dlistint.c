#include "lists.h"

/**
 * sum_dlistint - calculates sum of all the data (n) of a
 * dlistint_t linked list
 * @head: pointer to the first node
 *
 * Return: result
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
