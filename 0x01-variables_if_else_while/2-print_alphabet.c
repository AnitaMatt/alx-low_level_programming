#include <stdio.h>
/**
 * main - Entry point
 * Description: print the letters of the alphabet from a -z
 * Return: 0
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	putchar('\n');
	return (0);
}
