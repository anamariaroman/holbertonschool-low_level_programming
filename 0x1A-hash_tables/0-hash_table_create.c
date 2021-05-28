#include "hash_tables.h"
/**
 * hash_table_create - creates hash table
 * @size: size of the array
 * Return: the new hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int index = 0;
	hash_table_t *new = NULL; /* array of the size */

	new = malloc(sizeof(hash_table_t));
	/*allocated memory*/
	if (new == NULL)
		return (NULL);
	new->array = malloc(size * sizeof(hash_node_t *));
	new->size = size;
	if (new->array == NULL)
		return (NULL);
	for (; index < size; index++)
	{
		new->array[index] = NULL;
	}
	return (new);
}
