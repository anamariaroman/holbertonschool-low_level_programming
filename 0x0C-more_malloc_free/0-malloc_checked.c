#include <stdlib.h>
#include "holberton.h"
/**
 * malloc_checked - asing memory
 * @b: unsigned int
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	char *arr;

	if (b == 0)
	{
		return (NULL);
	}
	arr = malloc(b);
	if (arr == NULL)
	{
		exit(98);
	}
	return (arr);
}