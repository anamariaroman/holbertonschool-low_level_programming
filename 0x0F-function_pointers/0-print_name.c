#include "function_pointers.h"

/**
 * print_name - bob dylan
 * @name: print this name
 * @f: function pointers
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
