#include <stdio.h>

/**
 * swap_int - Swaps the values of two integers
 * @a : integer
 * @b : integer
 */

void swap_int(int *a, int *b)
{
	int avalue = *a;

	*a = *b;
	*b = avalue;
}
