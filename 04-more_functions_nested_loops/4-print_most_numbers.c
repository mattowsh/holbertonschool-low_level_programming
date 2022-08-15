#include "main.h"

/**
 * print_most_numbers - Prints the numbers from 0 to 9 except 2 y 4
 */

void print_most_numbers(void)
{
	int n;

	for (n = 48; n <= 57; n++) /* ASCII code */
	{
		if (n != 50 && n != 52)
		{
			_putchar(n);
		}
	}

	_putchar('\n');
}
