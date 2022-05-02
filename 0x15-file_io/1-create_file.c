#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * create_file - function that creates a file
 * @filename:  fil path
 * @text_content:  text
 * Return: int
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int wstat;
	int len = strlen(text_content);

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		wstat = write(fd, text_content, len);
		if (wstat == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
