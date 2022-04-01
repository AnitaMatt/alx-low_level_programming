#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - function to print change returned
 * @argv: arguments passed
 * @argc: argument count
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int temp, count = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	temp = atoi(argv[1]);

	count = change(temp);

	printf("%d\n", count);

	return (0);
}
