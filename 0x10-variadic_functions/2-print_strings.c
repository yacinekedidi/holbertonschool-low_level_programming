#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_strings - check the code for Holberton School students.
 * @separator : separator between strings
 * @n : number of parameters
 * Return: Always 0.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	for (i = 0 ; i < n ; i++)
	{
		printf("%s", va_arg(args, char *));
		if (i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
}
