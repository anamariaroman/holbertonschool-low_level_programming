#include "lists.h"
/**
 * dlistint_len - returns the number of elements in a linkedlist.
 * @j: pointer
 * Return: number of elements in a linkedlist.
 */
size_t dlistint_len(const dlistint_t *j)
{
	size_t i = 0;

	while (j != NULL)
	{
		j = j->next;
		i++;
	}

	return (i);
}
