#include "main.h"

/**
 * _puts_recursion - Prints a stringrints a string
 * @s : string
 */

void _puts_recursion(char *s)
{
	int i = 0;

	while (s[i])
	{
		_putchar(s[i]);
		i++;
	}

	_putchar('\n');
}
