#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * charPrint - prints parameter
 * @args : list of arguments
 * @s : my separator
 * Return: Always.
 */
void charPrint(va_list args, char *s)
{
	printf("%c%s", va_arg(args, int), s);
}

/**
 * intPrint - prints parameter
 * @args : list of arguments
 * @s : my separator
 * Return: Always.
 */
void intPrint(va_list args, char *s)
{
	printf("%d%s", va_arg(args, int), s);
}

/**
 * floatPrint - prints parameter
 * @args : list of arguments
 * @s : my separator
 * Return: Always.
 */
void floatPrint(va_list args, char *s)
{
	printf("%f%s", va_arg(args, double), s);
}

/**
 * stringPrint - prints parameter
 * @args : list of arguments
 * @s : my separator
 * Return: Always.
 */
void stringPrint(va_list args, char *s)
{
	char *str;

	str = va_arg(args, char *);
	if (str == NULL)
		str = "(nil)";
	printf("%s%s", str, s);
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
	char *separator = ", ";
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
				if (format[i + 1] == '\0')
					separator = "";
				form[i].x(args, separator);
					break;
			}
			j++;
		}
		i++;
	}

	printf("\n");
	va_end(args);
}
