#include <stdlib.h>
#include "holberton.h"
/**
 * string_nconcat - string concate
 * @s1: char 1
 * @s2: char2
 * @n: unsigned int
 * Return: char
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int lens1 = 0, lens2 = 0, i, j = 0;
	char *arr;

	if (s1 == NULL || s1 == '\0')
		lens1 = 0;
	else
	{
		for (i = 0; s1[i] != '\0'; i++)
			lens1++;
	}
	if (s2 == NULL || s2 == '\0')
		lens2 = 0;
	else
	{
		for (i = 0; s2[i] != '\0'; i++)
			lens2++;
	}
	if (n >= lens2)
		n = lens2;
	arr = malloc(sizeof(char) * (lens1 + n + 1));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < lens1; i++)
		arr[i] = s1[i];
	for (i = lens1; i < lens1 + n; i++, j++)
		arr[i] = s2[j];
	arr[lens1 + n] = '\0';
	return (arr);
}