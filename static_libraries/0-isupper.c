#include <stdio.h>
#include <ctype.h>

/**
 * _isupper - Checks for uppercase character
 * @c : character
 * Return: 1 if letter si uppercase, 0 otherwise
 */

int _isupper(int c)
{
	if (isupper(c)) /* command from ctype.h library */
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
