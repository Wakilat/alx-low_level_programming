#include "main.h"
/**
 * print_binary - prints a binary number using bit shifting and masks
 * @n: number to print
 *
 * Return: always void
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	_putchar((n & 1) + '0');
}
