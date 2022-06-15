#include "main.h"

/**
 * puts2 - Prints every other char of a string starting with the first char
 * @str : string
 */

void puts2(char *str)
{
	int i;

	while (*(str + i) != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(*(str + i));
		}
		i++;
	}
	_putchar('\n');
}
