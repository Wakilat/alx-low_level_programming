#include <stdio.h>

/**
 * main - Prints the lowercase alphabet in reverse, followed by a new line
 *
 * Return: returns (0)
 */

int main(void)
{
	char letters;
	for (letters = 'z'; letters >= 'a'; letters--)
		putchar(letters);
	        putchar('\n');
	return (0);
}
