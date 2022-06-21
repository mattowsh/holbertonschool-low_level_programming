#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Adds positive numbers
 * @argc : argument count
 * @argv : argument variable
 *
 * Return: result
 */

int main(int argc, char *argv[])
{
	int i, j, sum;

	if (argc == 0)
		printf("0\n");

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (argv[i][j] < 48 || argv[i][j] > 57)
			{
				printf("Error\n");
				return (1);
			}
		}
	}


	for (i = 0, sum = 0; argv[i]; i++)
		sum += atoi(argv[i]);

	printf("%d\n", sum);
	return (0);
}
