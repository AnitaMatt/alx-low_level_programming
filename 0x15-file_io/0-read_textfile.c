#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - function that reads a text file
 * and prints it to the POSIX standard output
 * @filename: file path
 * @letters: number of letters
 * Return: number of letters read
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int rstat;
	int wstat;
	char *buffer;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
		return (0);
	rstat = read(fd, buffer, letters);
	if (rstat == -1)
		return (0);
	wstat = write(fd, buffer, rstat);
	if (wstat == -1 || wstat != rstat)
		return (0);
	free(buffer);
	close(fd);
	return (wstat);
}
