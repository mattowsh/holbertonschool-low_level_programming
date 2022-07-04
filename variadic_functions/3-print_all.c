#include "variadic_functions.h"
#include <stdio.h>
void print_c(va_list args, char *separator);
void print_s(va_list args, char *separator);
void print_i(va_list args, char *separator);
void print_f(va_list args, char *separator);

/**
 * print_all - Prints anything
 * @format : list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j = 0;
	char *separator = "";

	_print_t data[] = {
		{"c", print_c},
		{"s", print_s},
		{"i", print_i},
		{"f", print_f},
		{NULL, NULL}
	};

	va_start(args, format);
	/* (format != NULL) ? va_start(args, format) : format = '\0'; */

	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (data[j].letter)
		{
			if (data[j].letter[0] == format[i])
			{
				(data[j].f)(args, separator);
				separator = ", ";
			}
			j++;
		}
		i++;
	}

	printf("\n");

	va_end(args);
}

/* mini functions */
/**
 * print_c - Prints char
 * @args : list of arguments
 * @separator : separator between arguments
 */
void print_c(va_list args, char *separator)
{
	char c = va_arg(args, int); /* porque le pinta al va_arg */

	printf("%s%c", separator, c);
}

/**
 * print_s - Prints string
 * @args : list of arguments
 * @separator : separator between arguments
 */
void print_s(va_list args, char *separator)
{
	char *str = va_arg(args, char *);

	if (!str)
		str = "(nil)";
	printf("%s%s", separator, str);
}

/**
 * print_i - Prints integer
 * @args : list of arguments
 * @separator : separator between arguments
 */
void print_i(va_list args, char *separator)
{
	int i = va_arg(args, int);

	printf("%s%d", separator, i);
}

/**
 * print_f - Prints float
 * @args : list of arguments
 * @separator : separator between arguments
 */
void print_f(va_list args, char *separator)
{
	float f = va_arg(args, double); /* tambien porque le pinta hmm */

	printf("%s%f", separator, f);
}
