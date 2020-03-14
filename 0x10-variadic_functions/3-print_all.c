#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * charPrint - prints parameter
 * @args : list of arguments
 * Return: Always.
 */
void charPrint(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * intPrint - prints parameter
 * @args : list of arguments
 * Return: Always.
 */
void intPrint(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * floatPrint - prints parameter
 * @args : list of arguments
 * Return: Always.
 */
void floatPrint(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * stringPrint - prints parameter
 * @args : list of arguments
 * Return: Always.
 */
void stringPrint(va_list args)
{
	char *str;

	str = va_arg(args, char *);
	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}

/**
 * print_all - prints parameters
 * @format : string containing formats
 * Return: Always.
 */

void print_all(const char * const format, ...)
{
	int i = 0, j;
	va_list args;
	char *separator = "";
	f_t form[] = {
		{"c", charPrint},
		{"f", floatPrint},
		{"i", intPrint},
		{"s", stringPrint}
	};

	va_start(args, format);
	while (format[i] != '\0' && format != NULL)
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == *(form[j]).fo)
			{
				printf("%s", separator);
				form[i].x(args);
				separator = ", ";
			}
			j++;
		}
		i++;
	}

	printf("\n");
	va_end(args);
}
