#include "main.h"

/**
 * puts2 - main function.
 * @str: Pointer, the string to print
 * Description: This function prints every other character of a string
 * (divisible by two)
 *
 * Return: none
 */

void puts2(char *str)
{
	int len = 0;
	int l = 0;
	char *y = str;
	int z;

	while (*y != '\0')
	{
		y++;
		len++;
	}
	l = len - 1;
	for (z = 0 ; z <= l ; z++)
	{
		if (z % 2 == 0)
		{
			_putchar(str[z]);
		}
	}
	_putchar('\n');
}
