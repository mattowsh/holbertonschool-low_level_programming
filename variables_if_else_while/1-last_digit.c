#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Assigns a random number to n. Displays is +, is zero or is -
 *  Return: Always 0 (Success)
 */

int main(void)
{
	int n, lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* Find last digit of n */
	lastDigit = n % 10;

	/* My code applying IF */
	printf("Last digit of %d is %d ", n, lastDigit);
	if (lastDigit > 5)
	{
		printf("and is greater than 5\n");
	}
	else if (lastDigit == 0)
	{
		printf("and is 0\n");
	}
	else
	{
		printf("and is less than 6 and not 0\n");
	}

	return (0);
}
