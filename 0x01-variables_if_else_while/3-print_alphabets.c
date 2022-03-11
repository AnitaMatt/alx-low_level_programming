#include <stdio.h>
/**
 * main - Entry point
 * Description: print all letters in lowercase and then all letters
 * in uppercase on the same line
 * Return: 0
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	for (letter = 'A'; letter <= 'Z'; letter++)
		putchar(letter);
	putchar('\n');

	return (0);
}
