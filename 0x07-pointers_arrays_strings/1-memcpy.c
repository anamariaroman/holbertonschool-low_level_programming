#include "holberton.h"
/**
 * _memcpy - copy
 * @dest: destination
 * @src: char
 * @n: variable
 * Return: dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
