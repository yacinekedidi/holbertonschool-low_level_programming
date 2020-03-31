#include "holberton.h"

/**
 * _strlen - check the code.
 * @s: string
 * Return: Always .
 */

int _strlen(char *s)
{
int i;

for (i = 0 ; s[i] ; i++)
;

return (i);
}

/**
 * create_file - check the code.
 * @filename: file
 * @text_content: content
 * Return: Always .
 */

int create_file(const char *filename, char *text_content)
{
int fd, wb;

	if (!filename)
		return (-1);


fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (fd);

	if (!text_content)
		return (1);


wb = write(fd, text_content, _strlen(text_content));
	if (wb == -1)
		return (wb);

close(fd);

return (1);
}
