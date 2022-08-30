#include "search_algos.h"

/**
 * print_array - Prints an array of integers
 *
 * @array: the array to be printed
 * @low: the lower number of each partition
 * @high : the higher numbert of each partition
 */

void print_array(const int *array, size_t low, size_t high)
{
	size_t i = low;

	printf("Searching in array: ");
	while (i <= high)
	{
		printf("%d", array[i]);
		if (i <= high - 1)
			printf(", ");
		i++;
	}
	printf("\n");
}

/**
 * binary_search - Searches for a value in a sorted array of integers using
 * the Binary search algorithm
 * @array : a pointer to the first element of the array to search in
 * @size : the number of elements in array
 * @value : the value to search for
 *
 * Return: index where value was located, -1 otherwise
 */

int binary_search(int *array, size_t size, int value)
{
	if (!array)
		return (-1);

	print_array(array, 0, size - 1);
	return (rec_binary(array, 0, size - 1, value));
}

/**
 * rec_binary - Finds a value using binary search strategy in a recursive way
 * @array : a pointer to the first element of the array to search in
 * @low : the lower number of each partition
 * @high : the higher numbert of each partition
 * @value: the value to search for
 *
 * Return: location of value in the array, -1 if value isn't in
 */

int rec_binary(int *array, size_t low, size_t high, int value)
{
	size_t mid = 0;
	
	if (value == array[low])
		return (array[low]);
	if (value == array[high])
		return (array[high]);

	if (low < high)
	{
		mid = (low + high) / 2;
		if (value == array[mid])
			return (array[mid]);
		else if (value > array[mid])
		{
			print_array(array, mid + 1, high);
			return (rec_binary(array, mid + 1, high, value));
		}
		else
		{
			print_array(array, low, mid - 1);
			return (rec_binary(array, low, mid - 1, value));
		}
	}

	return (-1);
}
