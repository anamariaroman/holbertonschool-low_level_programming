#include "holberton.h"
/**
 * _islower - search
 * @c: letter to return
 * main - return
 * Description: if
 * Return: void
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
