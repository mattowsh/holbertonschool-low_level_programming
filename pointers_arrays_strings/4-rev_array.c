#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers
 * @a: array
 * @n: number of elements of the array to swap
 */

void reverse_array(int *a, int n)
{
	int i, length;
	int temp[999];

	if (n <= 0)
		;
	else
	{
		for (i = 0; i < n; i++)
			temp[i] = a[i];
		for (i = i - 1, length = i; i >= 0; i--)
			a[length - i] = temp[i];
	}
}
