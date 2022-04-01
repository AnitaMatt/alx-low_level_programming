#include <stdio.h>

/**
 * main - function to print the new name of the program
 * @argv:  arguments passed
 * @argc: argument count
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[0]);
	}

	return (0);
}
