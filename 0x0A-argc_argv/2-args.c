#include <stdio.h>

/**
 * main - function to print all arguments on a new line
 * @argv: arguments passed
 * @argc: count of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}