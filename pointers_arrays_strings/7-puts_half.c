#include "main.h"
#include <stdio.h>

/**
 * puts_half - Prints half of a string
 */

void puts_half(char *str)
{
	int i, half_length;
	int length = 0;

	for (i = 0; str[i]; i++) /* calculates length of a string */
	{
		length++;
	}


	if (length % 2 == 0)
	{
		half_length = length / 2;
		while (str[half_length])
		{
			_putchar(str[half_length]);
			half_length++;
		}
		_putchar('\n');
	}
	else
	{
		half_length = ((length / 2) + 1);
		while (str[half_length])
		{
			_putchar(str[half_length]);
			half_length++;
		}
		_putchar('\n');
	}
}
