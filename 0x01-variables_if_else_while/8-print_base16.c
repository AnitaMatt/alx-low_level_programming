#include <stdio.h>
/**
 * main - Entry point
 * Description: printing the numbers of base16 in lowercase
 * Return: 0
 */
int main(void)
{
	int num;
	char letter;

	for (num = 0; num < 10; num++)
		putchar(num + 48);
	for (letter = 'a'; letter < 'g'; letter++)
		putchar(letter);
	putchar('\n');

	return (0);
}
