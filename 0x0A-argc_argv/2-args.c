#include <stdio.h>
#include "holberton.h"
/**
 * main - Short description, single line
 * @argc: Description of parameter
 * @argv: Description of paramete
* Return: Description of the returned value
*/
int main(int argc, char *argv[])
{
while (argc > 0)
{
printf("%s\n", *argv);
argv++;
argc--;
}
return (0);
}
