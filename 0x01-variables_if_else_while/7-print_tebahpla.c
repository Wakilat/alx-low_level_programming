#include <stdio.h>

/**
 * main - Lanzador
 *
 * Return: returns (0)
 */

int main(void)
{
	char letters = 0;

	for (letters = 'z'; letters >= 'a'; letters--)
	{
		putchar(letters);
	}
       	putchar('\n');
	return (0);
}
