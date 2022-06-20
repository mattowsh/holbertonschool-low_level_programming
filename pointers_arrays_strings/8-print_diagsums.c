#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals of a square
 * matrix of int
 * @a : matrix of int
 * @size : size of square
 */

void print_diagsums(int *a, int size)
{
	int i = 0, j, sumI = 0, sumII = 0;

	j = size - 1;

	if (size == 0)
		return;

	sumI = a[i];
	sumII = a[j];

	while (i < (size * size) - 1)
	{
		i += (size + 1);
		j += (size - 1);
		sumI += a[i];
		sumII += a[j];
	}

	printf("%d, %d\n", sumI, sumII);
}
