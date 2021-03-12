#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sums of all its parameters.
 * @a: number parameters
 * Return: sum parameters
 */
int sum_them_all(const unsigned int a, ...)
{
	int sum = 0;
	unsigned int i;
	va_list valist;

	va_start(valist, a);
	for (i = 0; i < a; i++)
		sum += va_arg(valist, int);
	va_end(valist);
	return (sum);
}
