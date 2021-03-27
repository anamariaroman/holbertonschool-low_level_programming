#include "holberton.h"
/**
* binary_to_uint - 010101 to 45
* @b: ptr binary
* Return: converted number, or 0
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int i, a;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
	}
	for (a = 0; b[a] != '\0'; a++)
	{
		num <<= 1;
		if (b[a] == '1')
			num += 1;
	}
	return (num);
}
