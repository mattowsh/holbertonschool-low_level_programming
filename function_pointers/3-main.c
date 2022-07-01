#include "3-calc.h"

/**
 * main - Calculator
 * @argc : arguments count
 * @argv : arguments variable
 *
 * Return: result of the operation
 */

int main(int argc, char *argv[])
{
	int a = atoi(argv[1]);
	/* int operator = argv[2][0]; */
	int b = atoi(argv[3]);
	int result = 0;
	int (*f)(int, int);

	f = get_op_func(argv[2]);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	/* if ((operator == '%' || operator == '/') && (b == 0)) */
	if (f == NULL)
	{
		printf("Error\n");
		exit(100);
	}

	result = f(a, b);
	printf("%d\n", result);
	return (0);
}
