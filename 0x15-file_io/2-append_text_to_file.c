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
 * append_text_to_file - check the code.
 * @filename: file
 * @text_content: string
 * Return: Always .
 */

int append_text_to_file(const char *filename, char *text_content)
{
int fd, wb;

	if (!filename)
		return (-1);

	if (!text_content)
		return (1);

fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
		return (-1);


wb = write(fd, text_content, _strlen(text_content));
	if (wb == -1)
		return (-1);

close(fd);


return (1);
}
