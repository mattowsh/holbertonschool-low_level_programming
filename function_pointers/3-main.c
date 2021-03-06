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
	int a, operator, b, result;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	operator = argv[2][0];
	b = atoi(argv[3]);

	f = get_op_func(argv[2]);
	if (f == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((operator == '%' || operator == '/') && (b == 0))
	{
		printf("Error\n");
		exit(100);
	}

	result = f(a, b);
	printf("%d\n", result);
	return (0);
}
