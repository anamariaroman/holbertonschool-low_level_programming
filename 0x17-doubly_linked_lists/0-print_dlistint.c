#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - prints all elements the dlistint_t list
 * @h: pointer to star linked list
 * Return: number of nodes
*/

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *j;
	size_t counter;

	j = h;
	counter = 0;

	while (j != NULL)
	{
		printf("%d\n", j->n);
		j = j->next;
		counter++;
	}
	return (counter);
}
