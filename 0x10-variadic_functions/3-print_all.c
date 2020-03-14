#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

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
 * intPrint - prints parameter
 * @args : list of arguments
 * Return: Always.
 */
void intPrint(va_list args)
{
	printf("%i", va_arg(args, int));
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
 * charPrint - prints parameter
 * @args : list of arguments
 * Return: Always.
 */
void charPrint(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * print_all - prints parameters
 * @format : string containing formats
 * Return: Always.
 */

void print_all(const char * const format, ...)
{
	int i, j;
	va_list args;
	char *separator = "";
	f_t form[] = {
		{"s", stringPrint},
		{"i", intPrint},
		{"f", floatPrint},
		{"c", charPrint}
	};

	va_start(args, format);
	i = 0;
	while (format[i] && format)
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == *(form[j].fo))
			{
				printf("%s", separator);
				form[j].x(args);
				separator = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
