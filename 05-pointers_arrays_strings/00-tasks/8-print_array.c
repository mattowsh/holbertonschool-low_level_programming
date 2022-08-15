#include <stdio.h>

/**
 * print_array - Prints n elements of an array of integers
 * @n : number of elements of the array to be printed
 * @a : array
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", a[i]);
		i++;
		if (i < n)
		{
			printf(", ");
		}
	}
	printf("\n");
}
