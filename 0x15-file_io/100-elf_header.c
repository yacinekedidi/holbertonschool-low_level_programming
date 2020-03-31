#include "holberton.h"
#include <elf.h>

/**
 * main - check the code.
 * @ac: number of argmnts
 * @av: arguments
 * Return: Always .
 */

int main(int ac, char **av)
{
int fd;
ssize_t rb;
Elf64_Ehdr h;

if (ac != 2)
{
	dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n");
	exit(98);
}

fd = open(av[1], O_RDONLY);
	if (fd == -1)
	{
	dprintf(STDERR_FILENO, "Cannot open %s \n", av[1]);
	exit(98);
	}

rb = read(fd, &h, sizeof(h));
	if (rb == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
	exit(98);
	}

if (h.e_type != 0x7f &&
	h.e_ident[1] != 'E' &&
	h.e_ident[2] != 'L' &&
	h.e_ident[3] != 'F')
	{
	dprintf(STDERR_FILENO, "%s Not an ELF file\n", av[1]);
	exit(98);
	}
else
printf("ELF Header:\n");


close(fd);
return (0);
}
