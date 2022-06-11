#include "main.h"

/**
 * print_diagonal - Draws a diagonal line on the terminal
 * @n : integer
 */


void print_diagonal(int n)
{
	int row; /* quantity of rows to be print */
	int space; /* quantity of spaces to be print */

	if (n <= 0)
	{
		_putchar('\n');
	}

	for (row = 0; row < n; row++)
	{
		for (space = 0; space < row; space++)
		{
			_putchar(32); /* ASCII code: space */
		}
		_putchar(92); /* ASCII code: \ */
		_putchar('\n');
	}
}
