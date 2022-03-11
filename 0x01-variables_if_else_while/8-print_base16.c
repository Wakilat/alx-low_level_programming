#include <stdio.h>

/**
 * main - Lanzador
 *
 * Return: returns (0)
 */

int main(void)
{
	char digit = '0';
	char letter = 'a';

	for (digit = '0'; digit <= '9'; digit++)
	{
		putchar(digit);
	}
	for (letter = 'a'; letter <= 'f'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
