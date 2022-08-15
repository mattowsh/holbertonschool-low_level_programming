#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse
 * @s : string
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;

	_print_rev_recursion(s + 1); /* pointer stay in the last char */
	_putchar(*s);
}
