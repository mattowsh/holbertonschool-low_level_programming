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
	int count = 0, i; /* i to iterate ULONG_MAX value = 64 */
	int aux;

	for (i = 0, aux = n ^ m; i < 64; i++, aux = aux >> 1)
		count += aux & 1;

	return (count);
}
