#include "lists.h"

/**
 * sum_dlistint - return the sum of list
 * @head: pointer head
 *
 * Return: sum of all data
 */
int sum_dlistint(dlistint_t *head)
{
	int suma = 0;

	while (head != NULL)
	{
		suma += head->n;
		head = head->next;
	}
	return (suma);
}
