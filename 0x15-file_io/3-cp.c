#include "holberton.h"


/**
 * yameru - check the code.
 * @n: number
 * @str: pstring
 * Return: Always .
 */

int yameru(int n, char *str)
{

switch (n)
{
case 97:
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
break;
case 98:
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", str);

break;
case 99:
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", str);
break;

default:
dprintf(STDERR_FILENO, "Error: Can't close fd %d", n);
n = 100;
break;
}

return (n);
}

/**
 * main - check the code.
 * @ac : number of param
 * @av: params
 * Return: Always .
 */

int main(int ac, char **av)
{
int fd, rb = 1, fdd, wb = 1;
char buffer[1024];

if (ac != 3)
exit(yameru(97, NULL));

fdd = open(av[1], O_RDONLY);
	if (rb == -1)
		exit(yameru(98, av[1]));

fd = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd == -1)
		exit(yameru(99, av[2]));
while (rb)
{
rb = read(fdd, buffer, 1024);
	if (rb == -1)
		exit(yameru(98, av[1]));
if (rb > 0)
{
wb = write(fd, buffer, rb);
	if (wb == -1)
		exit(yameru(99, av[2]));
}
}
wb = close(fdd);
	if (wb == -1)
		exit(yameru(fdd, NULL));
wb = close(fd);
	if (wb == -1)
		exit(yameru(fd, NULL));
return (0);
}
