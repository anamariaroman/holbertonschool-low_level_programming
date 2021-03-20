#include "lists.h"
/**
 * add_node_end - add node to the end
 * @head: first node
 * @str: string
 * Return: adress
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr, *otherP;

	ptr = malloc(sizeof(list_t));
	if (ptr == NULL)
	{
		return (0);
	}
	ptr->str = strdup(str);
	if (ptr->str == NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptr->len = _strlen(ptr->str);
	ptr->next = NULL;
	if (*head == NULL)
	{
		*head = ptr;
		return (ptr);
	}
	otherP = *head;
	while (otherP->next)
	{
		otherP = otherP->next;
	}
	otherP->next = ptr;
	return (ptr);
}
/**
 * _strlen - length of str
 * @str: str
 * Return: length
 */
unsigned int _strlen(char *str)
{
	unsigned int i;

	for (i = 0; str[i]; i++)
	{
	}
	return (i);
}
