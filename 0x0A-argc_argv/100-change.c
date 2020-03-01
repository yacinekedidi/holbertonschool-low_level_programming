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
int tab[5] = {25, 10, 5, 2, 1}, y = atoi(argv[1]), i = 0, x = 0;
if (argc != 2)
{
printf("Error\n");
return (1);
}
if (y <= 0)
{
printf("0\n");
return (0);
}
while (i < 5 || y != 0)
{
if (y / tab[i] != 0)
{
x = x + y / tab[i];
y = y % tab[i];
}
i++;
}
printf("%d\n", x);
return (0);

}
