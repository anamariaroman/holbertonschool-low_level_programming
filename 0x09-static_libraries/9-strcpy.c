#include "holberton.h"
/**
 * _strcpy - strcpy
 * @dest: 1 variable
 * @src: 2 variable
 * Return: char
 *
*/
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0 ; src[i] != '\0' ; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = 0;
	return (dest);
}
