#include "lists.h"
/**
* sum_listint - sum
* @head: first node
* Return: the sum of all the data
*/
int sum_listint(listint_t *head)
{
	int i, suma = 0;

	for (i = 0; head != NULL; i++)
	{
		suma += head->n;
		head = head->next;
	}
	return (suma);
}
