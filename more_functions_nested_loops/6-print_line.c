#include "main.h"

/**
 * print_line - Draws a straight line in the terminal
 */

void print_line(int n)
{
	int counter; /* quantity of _ to print */

	if (n > 0)
	{
		for (counter = 1; counter <= n; counter++)
		{
			_putchar(95); /* ASCII code */
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
