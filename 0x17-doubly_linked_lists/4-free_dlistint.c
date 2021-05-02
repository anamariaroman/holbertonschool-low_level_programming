#include "lists.h"
#include <stdlib.h>
/**
 * free_dlistint - free the list.
 * @head: head pointer.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		head = tmp;
		free(head);
	}
}
