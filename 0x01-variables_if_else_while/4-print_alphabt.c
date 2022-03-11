#include <stdio.h>
/**
 * main - Entry point
 * Description: print all alphabets in lowercase except q and e
 * Return: 0
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter == 'e' || letter == 'q')
			continue;
		putchar(letter);
	}
	putchar('\n');

	return (0);
}
