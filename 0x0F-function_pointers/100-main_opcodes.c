#include <stdio.h>
#include <stdlib.h>

/**
 * myfunc - check if a number is equal to 98
 * @s: the integer to check
 * @b: the integer to check
 * Return: 0 if false, something else otherwise.
 */
void myfunc(char *s, int b)
{
	int i;

	for (i = 0 ; i < b ; i++)
	{
		printf("%02x", (unsigned char) s[i]);
		if (i != b - 1)
			printf(" ");
	}
	printf("\n");
}


/**
 * main - check if a number is equal to 98
 * @argc: the integer to check
 * @argv: the integer to check
 * Return: 0 if false, something else otherwise.
 */
int main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (argv[1] < 0)
	{
		printf("Error\n");
		return (2);
	}
	myfunc((char *)&main, atoi(argv[1]));
	return (0);
}
