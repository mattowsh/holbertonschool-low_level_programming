#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int
 * @b : string of 0 and 1 chars
 *
 * Return: the converted number, 0 if there is one or more chars in the string
 * b that is not 0 or 1 or b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i, length;
	unsigned int n = 1, conversion;

	i = length = conversion = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] != 0 && b[i] != 1)
			return (0);
		length++;
	}


	for (i = length - 1; i >= 0; i--)
	{
		if (b[i] == 1)
			conversion += n;

		n += n;
	}

	return (conversion);
}
