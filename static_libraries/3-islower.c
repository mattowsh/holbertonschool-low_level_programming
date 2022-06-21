#include "main.h"

/**
 * _islower - Returns 1 if c is lowercase, 0 otherwise
 * @c: letter
 * Return: 1 lowercase, 0 otherwhise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122) /* by ASCII code */
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
