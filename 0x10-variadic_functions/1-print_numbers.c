#include <stdarg.h>
#include <stdio.h>

/**
* print_numbers - print number with the separator
* @separator: ,
* @j: numbers
* Return: numbers and separator
*/

void print_numbers(const char *separator, const unsigned int j, ...)
{
	va_list list;
	unsigned int i;

	va_start(list, j);

	for (i = 0; i < j; i++)
	{
		if (separator != NULL)
		{
			if (i != (j - 1))
				printf("%d%s", va_arg(list, int), separator);
			else
				printf("%d", va_arg(list, int));
		}
		else
			printf("%d", va_arg(list, int));
	}
	printf("\n");
}
