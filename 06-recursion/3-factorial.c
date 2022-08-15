#include "main.h"

/**
 * factorial - Calculates the factorial of a given number
 * @n : integer
 *
 * Return: integer
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else /* always n > 0 */
		return (n * factorial(n - 1));
}
