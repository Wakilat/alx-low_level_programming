#include "main.h"

/**
 * _puts - main function
 * @str: Pointer with the address value
 *
 * Return: none
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
