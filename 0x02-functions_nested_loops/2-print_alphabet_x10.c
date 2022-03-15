#include "main.h"

/**
 * print_alphabet_x10 - Print alphabets in lower case ten times
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	int a;
	char b;

	for (a = 1; a <= 9; a++)
	{
		for (b = 'a'; b <= 'z'; b++)
		{
			_putchar(b);
		}
		_putchar('\n');
	}
}
