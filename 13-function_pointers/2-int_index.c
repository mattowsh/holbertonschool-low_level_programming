#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - Searches for an integer
 * @array : array of integers
 * @size : number of the elements in the array
 * @cmp : function to be used
 *
 * Return: index of the first element for which the cmp function
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, cmp_result;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		cmp_result = cmp(array[i]);
		if (cmp_result != 0)
			return (i);
	}

	return (-1);
}
