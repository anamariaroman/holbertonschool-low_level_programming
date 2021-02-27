#include "holberton.h"
/**
 * _memset - constant value
 * @s: char
 * @b: char
 * @n: number
 * Return: char
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	for (j = 0 ; j < n ; j++)
	{
		s[j] = b;
	}
	return (s);
}
