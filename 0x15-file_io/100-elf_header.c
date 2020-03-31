#include "holberton.h"
#include <elf.h>

/**
 * magicPrint - check the code.
 * @h: struct
 * Return: Always .
 */

void magicPrint(Elf64_Ehdr h)
{
	int i = 0;
printf("  Magic:   ");
for (i = 0 ; i < 16 ; i++)
printf("%2.2x ", h.e_ident[i]);
printf("\n");
}

/**
 * classPrint - check the code.
 * @h: struct
 * Return: Always .
 */

void classPrint(Elf64_Ehdr h)
{
	printf("  Class:                             ");
if (h.e_ident[EI_CLASS] == ELFCLASS64)
printf("ELF64\n");
if (h.e_ident[EI_CLASS] == ELFCLASS32)
printf("ELF32\n");
if (h.e_ident[EI_CLASS] == ELFCLASSNONE)
printf("invalid ELF class\n");
}

/**
 * dataPrint - check the code.
 * @h: struct
 * Return: Always .
 */

void dataPrint(Elf64_Ehdr h)
{
printf("  Data:                              ");
if (h.e_ident[EI_DATA] == ELFDATA2LSB)
printf("2's complement, little endian\n");
if (h.e_ident[EI_DATA] == ELFDATA2MSB)
printf("2's complement, big endian\n");
if (h.e_ident[EI_DATA] == ELFDATANONE)
printf("none\n");
}


/**
 * versionPrint - check the code.
 * @h: struct
 * Return: Always .
 */

void versionPrint(Elf64_Ehdr h)
{
printf("  Version:                           %d", h.e_ident[EI_VERSION]);
if (h.e_ident[EI_VERSION] == EV_CURRENT)
printf(" (current)\n");
if (h.e_ident[EI_VERSION] == EV_NONE)
printf("none\n");
}


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
magicPrint(h);
classPrint(h);
dataPrint(h);
versionPrint(h);
close(fd);
return (0);
}
