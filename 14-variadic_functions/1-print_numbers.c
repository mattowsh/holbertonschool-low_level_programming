#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - Prints numbers
 * @separator : string to be printed between numbers
 * @n : number of integers passed to the function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		if (i == n - 1 || separator == NULL)
			printf("%d", va_arg(args, int));
		else
			printf("%d%s", va_arg(args, int), separator);
	}

	printf("\n");

	va_end(args);
}