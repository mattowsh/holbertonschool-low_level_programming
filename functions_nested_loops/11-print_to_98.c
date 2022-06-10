#include "main.h"
#include <stdio.h>

/**
 * add - Adds two integers and returns the result
 * Return: a + b
 */

void print_to_98(int n)
{
	int limit = 98;

	if (n < 98)
	{
		for (n = n; n < 98; n++)
		{
			printf("%d, ", n);
		}
	}
	else
	{
		for (n = n; n > 98; n--)
		{
			printf("%d, ", n);
		}
	}

	printf("%d\n", limit);
}
