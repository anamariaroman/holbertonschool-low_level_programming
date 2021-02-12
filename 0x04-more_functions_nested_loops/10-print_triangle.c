#include "holberton.h"

/**
 * print_triangle - print triangle size size
 * @size: size of triangle
 *
 * Return: void
 */


void print_triangle(int size)
{
	int a, j;

	if (size <= 0)
		_putchar('\n');
	for (a = 1; a <= size; a++)
	{
		for (j = 1; j <= size; j++)
		{
			if (j <= (size - a))
				_putchar(' ');
			else
				_putchar('#');
		}
		_putchar('\n');
	}

}
