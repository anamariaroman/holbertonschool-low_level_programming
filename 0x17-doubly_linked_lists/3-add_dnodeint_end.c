#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * add_dnodeint_end - adds a new node at the end of a list.
 * @head: head
 * @n: value
 * Return: address of the new element.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *tmp = *head;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (tmp->next)
		tmp = tmp->next;

	tmp->next = new;
	new->prev = tmp;

	return (new);
}
