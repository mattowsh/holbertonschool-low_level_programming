#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index
 * @n : number to convert
 * @index : number of the bit to return
 *
 * Return: the value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int binary_value = (n >> index) & 1;

	if (index <= 64)
	{
		if (binary_value == 0 || binary_value == 1)
			return (binary_value);
	}
	else
		return (-1);
}
