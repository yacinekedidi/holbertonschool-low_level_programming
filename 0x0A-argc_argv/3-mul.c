#include <stdio.h>
#include <stdlib.h>
/**
 * main - Short description, single line
 * @argc: Description of parameter
 * @argv: Description of paramete
* Return: Description of the returned value
*/
int main(int argc, char *argv[])
{
int x;
if (argc != 3)
{
printf("Error\n");
return (1);
}
x = atoi(argv[1]) * atoi(argv[2]);
printf("%i\n", x);
return (0);
}
