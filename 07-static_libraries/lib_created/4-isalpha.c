#include "main.h"

/**
 * _isalpha - Checks for alphabetic character
 * @c: character
 * Return: 1 letter, 0 otherwhise
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 122) /* by ASCII code */
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
