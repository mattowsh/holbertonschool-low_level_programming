#include "main.h"

/**
 * is_prime_number - Checks if a number is prime or not
 * @n : integer
 *
 * Return: 1 if the n is prime, 0 otherwise
 */

int is_prime_number(int n)
{
	if (n == 1 || n < 0)
		return (0);

	return (searchP(n, n - 1));
}

/**
 * searchP - Searches a P integer
 * @n : integer
 * @P : integer
 *
 * Return: the P integer
 */

int searchP(int n, int P)
{
	if (P == 1) /* P == 1 when n is prime*/
		return (1);

	if (n % P == 0)
		return (0);

	if (n % P != 0)
		return (searchP(n, P - 1));

	return (0);
}
