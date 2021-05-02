#include "lists.h"

/**
 * get_dnodeint_at_index - return the nth node list
 * @head: head pointer
 * @index: index
 * Return: the node
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int counter = 0;
	dlistint_t *temp;

	temp = head;
	while (temp != NULL)
	{
		if (counter == index)
			break;

		temp = temp->next;
		counter++;
	}
	return (temp);
}
