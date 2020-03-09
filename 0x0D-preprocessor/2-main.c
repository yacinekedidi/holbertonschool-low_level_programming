#include <stdio.h>


/**
 * main - prints the file name.
 *
 * Return: Always 0.
 */
int main(void)
{
	char a[] = __FILE__;

	printf("%s\n", a);
	return (0);
}
