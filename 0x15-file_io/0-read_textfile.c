#include "holberton.h"


/**
 * read_textfile - check the code.
 * @filename: file
 * @letters: bytes
 * Return: Always .
 */

ssize_t read_textfile(const char *filename, size_t letters)
{

int fd, rb, wb;
char *buffer;

	if (!filename)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);


	fd = open(filename, O_RDWR);
	if (fd == -1)
	return (0);


	rb = read(fd, buffer, letters);
	if (rb == -1)
	return (0);


	wb = write(STDOUT_FILENO, buffer, rb);
	if (wb == -1 || wb != rb)
		{
		free(buffer);
		return (0);
		}

free(buffer);
close(fd);

return (wb);
}
