#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - print alphabet
 * description: use while
 * Return: void
 */

int main(void)
{
	int a = 122;

	while (a <= 97)
	{
		putchar(a);
		a++;
	}
		putchar(10);
	return (0);
}
