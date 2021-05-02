#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - function that adds a new node at the beginning of the list.
 * @head: pointer
 * @n: value
 * Return: the address of the new element.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->next = *head;
	new->prev = NULL;

	if (*head != NULL)
		(*head)->prev = new;

	*head = new;

	return (new);
}
