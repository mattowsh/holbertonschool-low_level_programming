#include "main.h"

/**
 * print_triangle - Prints a triangle, followed by a new line
 * @size : integer, size of triagle
 */

void print_triangle(int size)
{
	int row; /* quantity of rows to be print */
	int space; /* quantity of spaces to be print */

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (row = 1; row <= size; row++)
	{
		for (space = 1; space <= size; space++)
		{
			if (space <= (size - row))
			{
				_putchar(32);
			}
			else
			{
				_putchar(35);
			}
		}
			_putchar('\n');
	}
}
