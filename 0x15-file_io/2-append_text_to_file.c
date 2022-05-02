#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: file path
 * @text_content: text
 * Return: int
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wstat = 0;
	int len, i = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		for (i = 0; text_content[i]; i++)
			len++;
		wstat = write(fd, text_content, len);
		if (wstat == -1)
			return (-1);
	}
	close(fd);
	return (1);}
