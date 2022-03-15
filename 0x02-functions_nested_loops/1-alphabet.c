#include "main.h"

/**
 * print_alphabet - Print alphabets in lower case
 *
 * Return: return (0) means success
 */

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
