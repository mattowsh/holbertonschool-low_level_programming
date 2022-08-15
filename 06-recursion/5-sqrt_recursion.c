#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n : integer
 *
 * Return: integer
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (searchB(n, 1));
}

/**
 * searchB - Searchs a B integer that comply B * B = n
 * @n : integer
 * @B : integer
 *
 * Return: the B integer
 */

int searchB(int n, int B)
{
	if (B * B == n)
		return (B);
	else if (B * B > n)
		return (-1);
	else
		return (searchB(n, B + 1));
}
