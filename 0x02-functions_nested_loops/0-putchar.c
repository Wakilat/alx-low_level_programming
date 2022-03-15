#include "main.h"

/**
 * main - Write a program that prints _putchar, followed by a new line.
 *
 * Return: return (0)
 */

int main(void)
{
	int str[] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};
	int i, size;

	size = sizeof(str) / sizeof(int);
	for (i = 0; i < size; i++)
		_putchar(str[i]);
	_putchar('\n');
	return (0);
}
