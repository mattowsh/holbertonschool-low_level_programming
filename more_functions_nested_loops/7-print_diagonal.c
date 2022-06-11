#include "main.h"

/**
 * print_diagonal - Draws a diagonal line on the terminal
 * @n : integer
 */

void print_diagonal(int n)
{
	int counter; /* quantity of _ to print */

	if (n > 0)
	{
		for (counter = 1; counter < n; counter++)
		{
			_putchar(32); /* ASCII code: space */
		}
		_putchar(92); /* ASCII code: \ */
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
