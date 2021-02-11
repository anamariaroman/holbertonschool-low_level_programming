#include "holberton.h"
/**
 * print_alphabet_x10 - ×10
 * main - alphabet ×10
 * Description: use loops
 * Return: void
*/
void print_alphabet_x10(void)
{
	int i, a;

	for (i = 1 ; i <= 10 ; i++)
	{

		for (a = 'a' ; a <= 'z' ; a++)
		{
			_putchar(a);
		}
	}
	_putchar('\n');
}
