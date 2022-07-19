#include "main.h"

/**
 * flip_bits - Returns the number of bits you would need to flip
 * to get from one number to another
 * @n : number A
 * @m : number B
 *
 * Return:  the number of bits you would need to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned int aux;

	if (((n == 64) && (m == 0)) || ((n == 0) && (m == 64)))
		return (64);

	for (aux = n ^ m; aux != 0; aux = aux >> 1)
		count += aux & 1;

	return (count);
}
