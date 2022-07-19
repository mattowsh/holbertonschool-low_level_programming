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
	unsigned int count = 0, i; /* i to iterate ULONG_MAX value = 64 */
	unsigned int aux;

	for (aux = n ^ m, i = 0; i < 64; aux = aux >> 1, i++)
		count += aux & 1;

	return (count);
}
