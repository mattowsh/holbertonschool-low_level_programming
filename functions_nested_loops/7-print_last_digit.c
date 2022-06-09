#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @n: integer
 * Return: 0
 */

int print_last_digit(int n)
{
	int N = n % 10;

	if (N < 0)
	{
		N = N * -1;
	{

	_putchar(N + '0');
	return (N);
}
