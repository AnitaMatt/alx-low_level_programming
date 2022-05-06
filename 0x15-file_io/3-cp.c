#include <stdio.h>
#include <stdlib.h>
#include "main.h"

#define SE STDERR_FILENO
/**
 * main - Entry point
 * @argc:  argument count
 * @argv: vectors
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	char *buffer;
	int rd_from, wr_to;
	int cl_from, cl_to;

	if (argc != 3)
		dprintf(SE, "Usage: cp file_from file_to\n"), exit(97);
	fd_from = open(argv[1], O_RDONLY);
	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
		dprintf(SE, "Error: Can't write to %s\n", argv[2]), exit(99);
	rd_from = read(fd_from, buffer, 1024);
	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (fd_from == -1 || rd_from == -1)
		{
			dprintf(SE, "Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}
		wr_to = write(fd_to, buffer, rd_from);
		if (fd_to == -1 || wr_to == -1)
		{
			dprintf(SE, "Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		rd_from = read(fd_from, buffer, 1024);
		fd_to = open(argv[2], O_WRONLY | O_APPEND);
	} while (rd_from > 0);
	free(buffer);
	cl_from = close(fd_from);
	cl_to = close(fd_to);
	if (cl_from == -1)
		dprintf(SE, "Error: Can't close fd %d\n", fd_from), exit(100);
	if (cl_to == -1)
		dprintf(SE, "Error: Can't close fd %d\n", fd_to), exit(100);
	return (0);
}
