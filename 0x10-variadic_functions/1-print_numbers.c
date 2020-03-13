#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_numbers - check the code for Holberton School students.
 * @separator : a separator between numbers
 * @n : number of parameters
 * Return: Always 0.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int s = 0;
	unsigned int i;
	va_list args;

	va_start(args, n);
	for (i = 0 ; i < n ; i++)
	{
		s = va_arg(args, int);
		printf("%i", s);
		if (i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
