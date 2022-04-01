#include <stdio.h>
#include <stdlib.h>


/**
 * main - function to add function arguments
 * @argc:  argument count
 * @argv: arguments passed
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;
	int add = 0;

	if (argc < 2)
	{
		printf("%d\n", 0);
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (!atoi(argv[i]))
		{
			printf("Error\n");
			return (1);
		}

		add += atoi(argv[i]);
	}

	printf("%d\n", add);

	return (0);
}
