#include "lists.h"
#include <stdlib.h>

/**
 * free_list -  frees a list_t list
 * @head: pointer to list
 */
void free_list(list_t *head)
{
	list_t *ptr;

	if (!head)
		free(head);
	else
	{
		ptr = head;
		while (ptr)
		{
			head = ptr->next;
			free(ptr->str);
			free(ptr);
			ptr = head;
		}
	}
}
