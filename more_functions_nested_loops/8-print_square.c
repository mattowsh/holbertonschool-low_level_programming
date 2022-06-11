#include "main.h"

/**
 * print_size - Prints a line of # on the terminal
 * @size : integer, size of square
 */

void print_size(int size)
{
	int qty; /* size of line */

	if (size > 0)
	{
		for (qty = 0; qty < size; qty++)
		{
			_putchar(35); /* ASCII code: # */
		}

		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}


/**
 * print_square - Prints n times the line of #
 * @size : integer, size of square
 */

void print_square(int size)
{
	int row; /* quantity of rows to be print */

	if (size > 0)
	{
		for (row = 0; row < size; row++)
		{
			print_size(size);
		}
	}
	else
	{
		_putchar('\n');
	}
}
