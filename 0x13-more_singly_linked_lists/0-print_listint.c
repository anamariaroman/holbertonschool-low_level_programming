#include "lists.h"
/**
* print_listint - prints all the elements
* @h: ptr to constant list
* Return: number of nodes
*/
size_t print_listint(const listint_t *h)
{
	size_t cont = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		cont++;
		h = h->next;
	}
	return (cont);
}
