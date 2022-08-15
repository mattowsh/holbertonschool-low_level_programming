#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two numbers
 * @argc : argument count
 * @argv : argument variable
 *
 * Return: result
 */

int main(int argc, char *argv[])
{
	int mul, numberA, numberB;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		numberA = atoi(*(argv + 1));
		numberB = atoi(*(argv + 2));

		mul = numberA * numberB;
		printf("%d\n", mul);
		return (0);
	}
}
