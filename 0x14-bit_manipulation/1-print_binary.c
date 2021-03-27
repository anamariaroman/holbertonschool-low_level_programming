#include "holberton.h"
/**
* print_binary - convert num to binary
* @n: is the number to convert
* Return: void
*/
void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	_putchar((n & 1) + '0');
}
