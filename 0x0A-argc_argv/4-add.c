#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * main - Short description, single line
 * @argc: Description of parameter
 * @argv: Description of paramete
* Return: Description of the returned value
*/
int main(int argc, char *argv[])
{
int  i, x = 0, j;
if (argc < 2)
{
printf("0\n");
return (0);
}
for (i = 1 ; i < argc ; i++)
{
for (j = 0 ; j < (int) strlen(argv[i]) ; j++)
if (!isdigit(argv[i][j]))
{
printf("Error\n");
return (1);
}
x += atoi(argv[i]);
}
printf("%i\n", x);
return (0);
}
