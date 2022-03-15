#include "main.h"

/**
 * _isalpha - checks letter
 * @c: caracter recibo por main.
 * Return: 1 if c is lowercase
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
