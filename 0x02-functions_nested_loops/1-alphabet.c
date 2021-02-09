#include "holberton.h"

/**
 * print_alphabet - short description, single line
 * main - Alphabetic Holberton
 * Description: a-z alphabet holberton
 * print_alphabet
 * Return: void
 */

void print_alphabet(void)
{
	
	int az;
	
	for (az = 97; az <= 122; az++)
		_putchar(az);

	_putchar(10);
}
