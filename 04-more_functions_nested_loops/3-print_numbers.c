#include "main.h"

/**
 * print_numbers - Prints the numbers, from 0 to 9, followed by a new line
 */

void print_numbers(void)
{
	int n;

	for (n = 48; n <= 57; n++) /* ASCII code */
	{
		_putchar(n);
	}

	_putchar('\n');
}
