#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given index
 * @n : number to set
 * @index : number of the bit to set
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int aux = 1;

	if (index < 64)
	{
		aux <<= index;
		aux = ~aux;
		(*n) = (*n) & aux;
		return (1);
	}

	return (-1);
}
