#include <stdio.h>

/**
 * main - function to print number of argument paseed
 * @argv: arguments passed
 * @argc: number of arguments passed
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);

	return (0);
}
