#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * struct _print - type of argument and function associated info
 * @letter : type of argument (format[i])
 * @f : function associated
 */

typedef struct _print
	{
		char *letter;
		void (*f)(va_list args, char *separator);
	} _print_t;

/* functions */
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
