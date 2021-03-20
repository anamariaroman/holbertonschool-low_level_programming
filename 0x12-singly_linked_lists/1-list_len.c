#include "lists.h"
/**
 * list_len - function that returns the number of elements
 * in a list_t
 * @h: string - (malloc to end the string)
 *
 * Return: the number of nodes
 */
size_t list_len(const list_t *h)
{
	int i;

	for (i = 0; h != NULL; i++)
	{
		h = h->next;
	}

	return (i);
}
