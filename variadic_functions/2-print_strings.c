#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - Prints strings, followed by a new line
 * @separator : the string to be printed between the strings
 * @n : the number of strings passed to the function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *str;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);
		if (i == n - 1 || separator == NULL)
		{
			if (!str)
				printf("(nil)");
			else
				printf("%s", str);
		}
		else
		{
			if (!str)
				printf("(nil)%s", separator);
			else
				printf("%s%s", str, separator);
		}
	}

	printf("\n");

	va_end(args);
}
