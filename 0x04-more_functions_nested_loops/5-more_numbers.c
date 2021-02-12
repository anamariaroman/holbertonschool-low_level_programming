#include "holberton.h"

/**
 * more_numbers - prints 01234567891011121314\n x10
 *
 * Return: void
 */


void more_numbers(void)
{
	int i, b;

	for (i = 0; i <= 10; i++)
	{
		for (b = 0; b <= 14; b++)
		{
			if (b >= 10)
			{
				_putchar(i / 10 + '0');
			}
			_putchar(b % 10 + '0');
		}
		_putchar(10);
	}
}
