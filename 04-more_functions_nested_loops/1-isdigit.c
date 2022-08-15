#include <stdio.h>
#include <ctype.h>

/**
 * _isdigit - Checks for a digit (0 through 9)
 * @c : character
 * Return: 1 if c is a numeric character, 0 otherwise
 */

int _isdigit(int c)
{
	if (isdigit(c)) /* command from ctype.h library */
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
