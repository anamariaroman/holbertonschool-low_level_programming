#include "lists.h"
/**
 * print_list - function that prints the elements a list_t
 * @h: string - (malloc'ed string)
 *
 * Return: the number of the nodes
 */
size_t print_list(const list_t *h)
{
	int a;

	for (a = 0; h != NULL; a++)
	{
		if (h->str != NULL)
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}

		h = h->next;
	}

	return (a);
}
