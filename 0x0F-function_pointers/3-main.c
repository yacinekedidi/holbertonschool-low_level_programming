#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>
#include <string.h>

/**
 * main - check if a number is equal to 98
 * @argc: the integer to check
 * @argv: the integer to check
 * Return: 0 if false, something else otherwise.
 */
int main(int argc, char **argv)
{
	int (*p)(int, int), a = atoi(argv[1]), b = atoi(argv[3]);

	if (argc != 4)
	{
	printf("Error\n");
	exit(98);
	}
	p = get_op_func(argv[2]);
	if (b == 0 && (*argv[2] == '/' || *argv[2] == '%'))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", p(a, b));
	return (0);
}
